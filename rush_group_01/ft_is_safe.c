/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_safe.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:09:59 by aaudeber          #+#    #+#             */
/*   Updated: 2022/11/13 22:34:01 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_safe(int grid[4][4], int row, int col, int num)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	size = 3;
	while (i < size)
	{
		if (grid[row][i] == num)
			return (0);
		i++;
	}
	while (j < size)
	{
		if (grid[j][col] == num)
			return (0);
		j++;
	}
	return (1);
}
