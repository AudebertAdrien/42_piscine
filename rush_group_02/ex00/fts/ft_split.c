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

#include "../ft.h"

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
			words[words_index] = create_word(str, i, current_word_end);
			i += current_word_end - i;
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
