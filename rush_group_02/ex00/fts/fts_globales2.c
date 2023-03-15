/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_globales2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:20:11 by dfleury           #+#    #+#             */
/*   Updated: 2022/11/20 16:20:17 by dfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft.h"

// Supprime les espace en debut de fichier
char	*ft_trim(char *str)
{
	int		i;
	int		count;
	char	*new_str;

	count = ft_count_leading_spaces(str);
	new_str = malloc(sizeof(char) * (ft_strlen(str) - count) + 1);
	i = count;
	while (str[i])
	{
		new_str[i - count] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// renvoi le nombre d'espaces en debut de str
int	ft_count_leading_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] == ' ')
		i++;
	return (i);
}
