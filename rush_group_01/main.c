/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:51:37 by aaudeber          #+#    #+#             */
/*   Updated: 2022/11/13 22:39:15 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi.c"
#include "ft_stack_direction.c"
#include "ft_putstr.c"

#define N 4

int	main(int argc, char **argv)
{
	int	row;
	int	col;
	int	input[16];
	int	tab[N][N];
	int	i;
	int	j;

	row = 0;
	col = 0;
	i = 0;
	j = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	ft_atoi(input, argv[1]);
	if (ft_stack_direction(input, tab, 0, 0) == 1)
		ft_putstr("Done");
	else
		ft_putstr("Error");
	return (0);
}
