/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:45:55 by aaudeber          #+#    #+#             */
/*   Updated: 2022/11/14 09:50:51 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	is_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!base || ft_strlen(base) < 2)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int		base_l;
	unsigned int		nb;

	base_l = ft_strlen(base);
	if (is_error(base))
		return ;
	if (nbr < 0)
	{
		nb = nbr * -1;
		ft_putchar('-');
	}
	else
		nb = nbr;
	if (nb > base_l)
		ft_putnbr_base(nb / base_l, base);
	ft_putchar(base[nb % base_l]);
}
