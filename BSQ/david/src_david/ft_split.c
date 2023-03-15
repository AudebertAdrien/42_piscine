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

#include <stdlib.h>

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

// renvoi le nombre de mots dans str
int	count_words(char *str, char *charset)
{
	int	count_words;
	int	i;

	count_words = 0;
	i = 0;
	while (str[i])
	{
		if (!char_is_sep(charset, str[i])
			&& (i == 0 || char_is_sep(charset, str[i - 1])))
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
		if (!char_is_sep(charset, str[i])
			&& (i == 0 || char_is_sep(charset, str[i - 1])))
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
