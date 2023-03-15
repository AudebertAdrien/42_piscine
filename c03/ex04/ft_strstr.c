/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:31:02 by aaudeber          #+#    #+#             */
/*   Updated: 2022/11/09 20:04:47 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *str, char *to_find, int i)
{
	int	j;

	j = 0;
	while (to_find[j])
	{
		if (!str[i + j])
			return (0);
		if (str[i + j] != to_find[j])
			return (0);
		j++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	str_len;
	int	find_len;

	i = 0;
	str_len = ft_strlen(str);
	find_len = ft_strlen(to_find);
	while (i <= (str_len - find_len))
	{
		if (ft_strcmp(str, to_find, i))
			return (&str[i]);
		i++;
	}
	return (0);
}
