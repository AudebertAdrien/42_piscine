/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:54:20 by aaudeber          #+#    #+#             */
/*   Updated: 2022/11/09 10:00:25 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char ch)
{
	if ((ch < 'A' || ch > 'z') && (ch > 'Z' || ch < 'a'))
		return (1);
	return (0);
}

int	is_num(char ch)
{
	if (ch < '0' || ch > '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			if ((is_num(str[i - 1]) && is_alpha(str[i - 1])) || i == 0)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
