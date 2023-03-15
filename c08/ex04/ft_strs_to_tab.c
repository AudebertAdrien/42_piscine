/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:26:10 by aaudeber          #+#    #+#             */
/*   Updated: 2022/11/21 19:44:26 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		size_s;
	int		i;

	i = 0;
	size_s = ft_strlen(src);
	ptr = malloc(sizeof(*ptr) * (size_s + 1));
	if (!ptr)
		return (NULL);
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*t_tab;
	int			i;

	i = 0;
	t_tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!t_tab)
		return (0);
	while (i < ac)
	{
		t_tab[i].size = ft_strlen(av[i]);
		t_tab[i].str = av[i];
		t_tab[i].copy = malloc(sizeof(char) * (t_tab[i].size + 1));
		if (!t_tab[i].copy)
			return (0);
		ft_strcpy(t_tab[i].copy, av[i]);
		i++;
	}
	t_tab[i].str = 0;
	return (t_tab);
}
