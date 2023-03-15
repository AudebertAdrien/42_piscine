/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbrabant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:06:44 by nbrabant          #+#    #+#             */
/*   Updated: 2022/11/06 11:31:49 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(char symbol, int x)
{
	int	i;

	i = 0;
	while (i < x - 2)
	{
		ft_putchar(symbol);
		i++;
	}	
}

void	rush(int x, int y)
{
	int	count;

	count = 0;
	if (x > 0 && y > 0)
		ft_putchar('/');
	line('*', x);
	if (x > 1)
		ft_putchar('\\');
	ft_putchar('\n');
	while (count < y - 2)
	{
		if (y > 1)
			ft_putchar('*');
		line(' ', x);
		if (x > 1)
			ft_putchar('*');
		ft_putchar('\n');
		count++;
	}
	if (y > 1)
		ft_putchar('\\');
	if (y > 1)
		line('*', x);
	if (y > 1 && x > 1)
		ft_putchar('/');
}
