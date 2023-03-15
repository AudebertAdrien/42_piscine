/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by aaudeber          #+#    #+#             */
/*   Updated: 2022/11/08 17:25:39 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hex(int nb)
{
	int	demod;

	i = 0;
	if (nb > 0)
		ft_put_hex(nb / 16);
	if (nb < 0)
		return ;
	demod = nb % 16;
	if (demod < 10)
		ft_putchar(demod + 48);
	else
		ft_putchar('a' + demod - 10);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 1);
			ft_put_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
