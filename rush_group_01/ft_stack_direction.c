/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_direction.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:35:50 by aaudeber          #+#    #+#             */
/*   Updated: 2022/11/13 22:35:27 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is_safe.c"
#include "ft_size.c"
#define N 4

int	ft_stack_direction(int input[16], int tab[N][N], int row, int col)
{
	int	num;
	int	j;

	num = 1;
	j = 0;
	if (row == N - 1 && col == N)
		return (1);
	if (row == N || col == N)
	{
		if (ft_size(tab[0][col], tab[1][col], tab[2][col], tab[3][col]) != input[j + 0])
			return (0);
		if (ft_size(tab[3][col], tab[2][col], tab[1][col], tab[0][col]) != input[j + 4])
			return (0);
		if (ft_size(tab[row][0], tab[row][1], tab[row][2], tab[row][3]) != input[j + 8])
			return (0);
		if (ft_size(tab[row][3], tab[row][2], tab[row][1], tab[row][0]) != input[j + 12])
			return (0);
	}
	if (col == N)
	{
		row++;
		col = 0;
	}
	while (num <= N)
	{
		if (ft_is_safe(tab, row, col, num) == 1)
		{
			tab[row][col] = num;
			if (ft_stack_direction(input, tab, row, col + 1))
				return (1);
		}
		num++;
	}
	return (0);
}
