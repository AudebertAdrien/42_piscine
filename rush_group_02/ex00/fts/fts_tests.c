/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:21:51 by dfleury           #+#    #+#             */
/*   Updated: 2022/11/20 16:22:16 by dfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft.h"

void	print_struct_number_with_space(t_nbr *st_nbr)
{
	if (st_nbr->billions > 0)
	{
		ft_putnbr(st_nbr->billions);
		ft_putstr(".");
	}	
	if (st_nbr->millions > 0)
	{
		ft_putnbr(st_nbr->millions);
		ft_putstr(".");
	}	
	if (st_nbr->thousands > 0)
	{
		ft_putnbr(st_nbr->thousands);
		ft_putstr(".");
	}	
	ft_putnbr(st_nbr->cdu);
}

void	print_unsigned_int(t_dico_elem **dico, unsigned int i)
{
	t_nbr	*st_nbr;

	st_nbr = create_t_nbr_from_integer(i);
	print_struct_number_with_space(st_nbr);
	ft_putstr("   >>>   ");
	print_integer_in_letters(dico, i);
	printf("\n");
}

void	test_multiple_values(t_dico_elem **dico)
{
	print_unsigned_int(dico, 0);
	print_unsigned_int(dico, 4);
	print_unsigned_int(dico, 10);
	print_unsigned_int(dico, 11);
	print_unsigned_int(dico, 12);
	print_unsigned_int(dico, 14);
	print_unsigned_int(dico, 21);
	print_unsigned_int(dico, 35);
	print_unsigned_int(dico, 231);
	print_unsigned_int(dico, 1234);
	print_unsigned_int(dico, 222111);
	print_unsigned_int(dico, 123456);
	print_unsigned_int(dico, 233222111);
	print_unsigned_int(dico, 338222113);
	print_unsigned_int(dico, 333320215);
	print_unsigned_int(dico, 733325218);
	print_unsigned_int(dico, 2134567823);
	print_unsigned_int(dico, 4034567824);
	print_unsigned_int(dico, 2234567856);
}
