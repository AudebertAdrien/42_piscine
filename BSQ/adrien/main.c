/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:22:56 by aaudeber          #+#    #+#             */
/*   Updated: 2022/11/23 16:03:39 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	char	*str;
	int	i;

	i = 1;
	if(argc == 1)
	{
		ft_std_input();		
	}
	while (i < argc)
	{	
		str = ft_open(argv[i]);
		ft_putstr(str);
		i++;
	}
	return (0);
}
