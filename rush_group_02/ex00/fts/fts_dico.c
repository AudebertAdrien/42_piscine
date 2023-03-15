/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_dico.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glambrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:03:24 by glambrig          #+#    #+#             */
/*   Updated: 2022/11/20 16:37:45 by dfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../ft.h"

t_dico_elem	**get_dico_from_string_dico(char *str)
{
	char		**tab;
	int			i;
	int			line;
	int			countlignes;
	t_dico_elem	**tab_dico_elem;

	tab = ft_split(str, "\n");
	countlignes = count_lines(str);
	tab_dico_elem = malloc(sizeof(t_dico_elem *) * countlignes);
	i = 0;
	line = 0;
	while (line < countlignes)
	{
		if (tab[i])
		{
			if (ft_strlen(tab[i]) > 0)
			{
				tab_dico_elem[i] = create_struct_dico_elem(tab[i]);
				i++;
			}
		}
		line++;
	}
	return (tab_dico_elem);
}

// TODO : gerer erreur de dico
t_dico_elem	**get_dico_from_filename(char *filename)
{
	char		*str;
	int			countlignes;
	t_dico_elem	**tab_dico_elem;

	str = malloc(sizeof(char) * 4098);
	str = get_str_from_file(filename);
	if (!str)
		return (NULL);
	countlignes = count_lines(str);
	tab_dico_elem = malloc(sizeof(t_dico_elem *) * countlignes);
	tab_dico_elem = get_dico_from_string_dico(str);
	return (tab_dico_elem);
}

// TODO : gerer erreur de dico
void	print_dico(t_dico_elem **dico)
{
	int	i;

	i = 0;
	while (dico[i])
	{	
		printf("-- [%d] :::: \"%s\"\n", dico[i]->number, dico[i]->word);
		i++;
	}
}

char	*find_in_dico(t_dico_elem **dico, int key)
{
	int	i;

	i = 0;
	while (dico[i])
	{
		if (dico[i]->number == key)
			return (dico[i]->word);
		i++;
	}
	return (NULL);
}
