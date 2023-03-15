/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:36:24 by aaudeber          #+#    #+#             */
/*   Updated: 2022/11/21 10:23:52 by aaudeber         ###   ########.fr       */
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

int	ft_total_size(int size, char **strs, char *sep)
{
	int	i;
	int	string_size;

	string_size = 0;
	i = 0;
	while (i < size)
	{
		string_size += ft_strlen(strs[i]);
		i++;
	}
	string_size += ft_strlen(sep) * (size - 1);
	return (string_size + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_l;
	int	i;

	i = 0;
	dest_l = ft_strlen(dest);
	while (src[i])
	{
		dest[dest_l + i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;
	int		len;

	i = 0;
	len = ft_total_size(size, strs, sep);
	tab = malloc(sizeof(*tab) * (len + 1));
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i < size - 1)
			ft_strcat(tab, sep);
		i++;
	}
	tab[len] = '\0';
	return (tab);
}
