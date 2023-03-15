/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:39:13 by aaudeber          #+#    #+#             */
/*   Updated: 2022/11/20 14:49:41 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft.h"

void	print_s_if_needed(int val)
{
	if (val > 1)
		ft_putstr("s");
}

void	print_dizaine_et_unite(t_dico_elem **dico, int dd, int uu)
{
	int	du;

	du = dd * 10 + uu;
	if (du <= 20)
	{
		ft_putstr(find_in_dico(dico, du));
	}
	else if (find_in_dico(dico, du))
	{
		ft_putstr(find_in_dico(dico, du));
	}
	else
	{
		if (dd > 0)
		{
			ft_putstr(find_in_dico(dico, dd * 10));
			ft_putchar('-');
		}
		if (uu > 0)
			ft_putstr(find_in_dico(dico, uu));
	}
}

/*
 *	 affiche en lettre un nombre compris entre 0 et 999 
 */
void	print_in_letters_cdu(t_dico_elem **dico, int i)
{
	int	cc;
	int	dd;
	int	uu;

	cc = (i) / 100;
	dd = (i % 100) / 10;
	uu = (i % 10);
	if (cc > 1)
	{		
		ft_putstr(find_in_dico(dico, cc));
		ft_putstr(" ");
		ft_putstr(find_in_dico(dico, 100));
		print_s_if_needed(999);
	}
	else if (cc == 1)
		ft_putstr(find_in_dico(dico, 100));
	if (cc > 0 && (dd > 0 && uu > 0))
		ft_putstr(" ");
	print_dizaine_et_unite(dico, dd, uu);
}

/*
	affiche un nombre entre 0 et 999
	PUIS le nom "million, milliard, milles....."
*/
void	print_xxx_millionares(t_dico_elem **dico, int nbr, char *name)
{
	if (nbr > 0)
	{
		print_in_letters_cdu(dico, nbr);
		ft_putstr(" ");
		ft_putstr(name);
		print_s_if_needed(nbr);
		ft_putstr(" ");
	}
}

// TODO ENLEVER LES VIRGULES
/*
 *	Transforme un unsigned int en structure_nbr
 *	et l'affiche en lettre
 */
void	print_integer_in_letters(t_dico_elem **dico, unsigned int i)
{
	char	*str_millier;
	char	*str_million;
	char	*str_milliard;
	t_nbr	*st_nbr;

	str_millier = find_in_dico(dico, ONE_THOUSAND);
	str_million = find_in_dico(dico, ONE_MILLION);
	str_milliard = find_in_dico(dico, ONE_BILLION);
	st_nbr = create_t_nbr_from_integer(i);
	print_xxx_millionares(dico, st_nbr->billions, str_milliard);
	print_xxx_millionares(dico, st_nbr->millions, str_million);
	print_xxx_millionares(dico, st_nbr->thousands, str_millier);
	print_in_letters_cdu(dico, st_nbr->cdu);
}
