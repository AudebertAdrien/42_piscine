/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:38:33 by dfleury           #+#    #+#             */
/*   Updated: 2022/11/17 18:34:52 by dfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	char_is_sep(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	index_is_ze_debut_of_a_new_word(char *str, char *charset, int index)
{
	if (!char_is_sep(charset, str[index])
		&& (index == 0 || char_is_sep(charset, str[index - 1])))
		return (1);
	return (0);
}

// renvoi le nombre de mots dans str
int	count_words(char *str, char *charset)
{
	int	count_words;
	int	i;

	count_words = 0;
	i = 0;
	while (str[i])
	{
		if (index_is_ze_debut_of_a_new_word(str, charset, i))
			count_words++;
		i++;
	}
	return (count_words);
}

int	get_index_next_sep(char *str, char *charset, int start_index)
{
	int	i;

	while (str[start_index] && !char_is_sep(charset, str[start_index]))
		start_index++;
	if (str[start_index] && char_is_sep(charset, str[start_index]))
		return (start_index);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**words;
	int		words_index;
	int		current_word_end;

	words = (char **)malloc(sizeof(char **) * count_words(str, charset));
	words_index = 0;
	i = 0;
	while (str[i])
	{
		if (index_is_ze_debut_of_a_new_word(str, charset, i))
		{
			current_word_end = get_index_next_sep(str, charset, i + 1) - 1;
			words[words_index] = (char *)malloc
				(sizeof(char) * (current_word_end - i + 1));
			while (i <= current_word_end)
			{
				words[words_index][current_word_end - i] = str[i];
				i++;
			}
			words_index++;
		}
		i++;
	}
	return (words);
}
/*
	PSEUDO CODE

*****	Calculer tab_size ::: combien d'elem dans le tableau final
*****	Creer tableau de string ::::     tab[tab_size]
*****	definir     tab_index = 0
	
	parcourir tous les char de str
	si ce char est le debut d'un mot, on va chercher le prochain separateur
	-- on obtient donc la taille de la chaine
	-- creer une chaine avec malloc
	-- mettre cette chaine dans tab[tab_index]
	-- tab_index++
   */
