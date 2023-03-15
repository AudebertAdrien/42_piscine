/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:38:33 by dfleury           #+#    #+#             */
/*   Updated: 2022/11/20 16:21:23 by dfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft.h"

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

char	*create_word(char *str, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (end - start));
	i = 0;
	while (start <= end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}
