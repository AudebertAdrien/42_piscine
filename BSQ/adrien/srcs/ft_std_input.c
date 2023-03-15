/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_std_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:17:27 by aaudeber          #+#    #+#             */
/*   Updated: 2022/11/23 16:54:48 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft.h"
#define BUF_S 100

void	ft_std_input()
{
	int	ret;
	int	len_total;
	char	*str;
	char	ch;
	int	i;

	i = 0;
	ret = 0;
	len_total = 0;	
	while (read(STDIN_FILE, &ch, 1) > 0)
		len_total++;
        ft_putnbr(len_total);	
	str = malloc(sizeof(char) * len_total + 1);
	if(!str)
		return ;
	if(close(0) == -1)
        {
                ft_putstr("close() error");
                return ;
        }
	else
		ft_putchar('c');
	while (read(STDIN_FILE, &ch, 1) > 0)
	{
		ft_putchar('c');
	}
	str[len_total] = '\0';
	ft_putstr(str);
}
