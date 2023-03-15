/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:12:37 by aaudeber          #+#    #+#             */
/*   Updated: 2022/11/20 18:15:56 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft.h"

void	suite(char *dico_filename, char *string_number)
{
	unsigned int		nbr;
	int					i;
	t_dico_elem			**dico;

	i = 0;
	while (string_number[i])
	{
		if (string_number[i] == '-')
		{
			ft_putstr("Must be a positive numbers\n");
			return ;
		}
		i++;
	}
	nbr = ft_atoi(string_number);
	if (!nbr)
	{
		ft_putstr("ERROR -------------!NBR-------------\n");
		return ;
	}
	if (nbr < 0 || nbr == 0)
	{
		ft_putstr(" ERROR\n");
		return ;
	}
	dico = get_dico_from_filename(dico_filename);
	if (!dico)
	{
		ft_putstr("DICT ERROR\n");
		return ;
	}
	print_integer_in_letters(dico, nbr);
	ft_putstr("\n");
}

int	main(int argc, char **argv)
{
	char		*dico_filename;
	char		*string_number;

	if (argc == 2)
	{
		dico_filename = "dico_english.dict";
		string_number = argv[1];
	}
	else if (argc == 3)
	{
		dico_filename = argv[1];
		string_number = argv[2];
	}
	else
	{
		ft_putstr("ERROR-------------ARG-------------\n");
		return (0);
	}
	suite(dico_filename, string_number);
	return (0);
}
