/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:24:01 by aaudeber          #+#    #+#             */
/*   Updated: 2022/11/23 14:55:53 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft.h"
#define BUF_S 100

char	*ft_open(char *map_name)
{
	int	fd;
	int	ret;
	int	len_total;
	char	buf[BUF_S];
       	char	*str;

	len_total = 0;
	ret = BUF_S;
	fd = open(map_name, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (NULL);
	}
	while (ret)
	{
		ret = read(fd, buf, BUF_S );
		len_total += ret;
	}
	if(close(fd) == -1)
	{
		ft_putstr("close() error");
		return (NULL);
	}
	str = malloc(sizeof(char) * len_total + 1 );
	if(!str)
		return (NULL);

	fd = open(map_name, O_RDONLY);
	ret = read(fd, str, len_total);
	str[len_total] = '\0';
	
	if(close(fd) == -1)
	{
		ft_putstr("close() error");
		return (NULL);
	}
	return (str);
}
