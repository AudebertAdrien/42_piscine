/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:28:24 by aaudeber          #+#    #+#             */
/*   Updated: 2022/11/03 21:10:37 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	j;
	int	k;

	j = 0;
	k = 1;
	while (j <= 98)
	{
		while (k <= 99)
		{
			ft_putchar((j / 10) + 48);
			ft_putchar((j % 10) + 48);
			ft_putchar(' ');
			ft_putchar((k / 10) + 48);
			ft_putchar((k % 10) + 48);
			if (j == 98 && k == 99)
				return ;
			else
				write(1, ", ", 2);
			k++;
		}
		j++;
		k = j + 1;
	}
}
