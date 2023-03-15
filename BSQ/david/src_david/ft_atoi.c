/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:56:26 by dfleury           #+#    #+#             */
/*   Updated: 2022/11/10 13:55:45 by dfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_white_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus_count;
	int	result;

	i = 0;
	minus_count = 0;
	result = 0;
	while (str[i] && is_white_space(str[i]))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	while (str[i] && is_num(str[i]))
	{
		if (is_num(str[i]))
			result = result * 10 + ('0' - str[i]);	// c'est l'inverse !!!
		i++;
	}
	if (!(minus_count % 2))
		result *= -1;
	return (result);
}
