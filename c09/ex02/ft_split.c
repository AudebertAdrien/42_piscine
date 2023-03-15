/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:09:04 by aaudeber          #+#    #+#             */
/*   Updated: 2022/11/24 22:44:15 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**ft_count_word(char *str, char *charset)
{
	int	j;
	int	count;

	j = 0;
	count = 1;
		while (charset[j])
		{
			if (str[i] == charset[j] && str[i + 1] != '\0')
				count++;
			j++;
		}
		i++;
	}
	return (count);
}

char	*ft_create_word(char *str, int start, int end)
{
	char	*word;
	int	i;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	while (start <= end)
	{
		word[i] = str[start];
		start++;
		i++;
	}
	return (word);
}

int	is_charset(char ch, char *charset)
{
	int	j;

	if (!ch)
		return (0);
	j = 0;
	while (charset[j])
	{
		if (ch == charset[j])
			return (1);
		j++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	count;
	char	**tab;
	int	j;
	int	t;
	
	i = 0;
	count = 1;
	while (str[i])
	{
		count += ft_count_word(str, charset, i);
		i++;
	}
	tab = malloc(sizeof(char *) * (count + 1));
	
	j = 0;
	i = 0;
	t = 0;
	while (i < ft_strlen(str))
	{
		while (is_charset(str[i], charset))
			i++;
		j = i;
		while (!is_charset(str[i], charset))
			i++;
		if (str[j])
			tab[t] = ft_create_word(str, j, i - 1);	
		i++;
		t++;
	}
	tab[t] = 0;
	return (tab);
}
