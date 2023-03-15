/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:20:49 by aaudeber          #+#    #+#             */
/*   Updated: 2022/11/14 09:40:51 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int			i;
	int			num;
	char		sign;

	num = 0;
	i = 0;
	sign = 1;
	while ((str[i] && str[i] >= 9 && str[i] < 13) || str[i] == 32)
		i++;
	while ((str[i] && str[i] == 45) || str[i] == 43)
	{
		if (str[i] == 45)
			sign = sign * -1;
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num * sign);
}
