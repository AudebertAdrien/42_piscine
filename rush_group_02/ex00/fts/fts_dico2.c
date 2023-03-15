/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_dico2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glambrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:03:24 by glambrig          #+#    #+#             */
/*   Updated: 2022/11/20 16:23:58 by dfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../ft.h"

/*
 *	Transforme un 'unsigned int' en 'structure_nbr'
 *	et return ce structure_nbr
 */
t_nbr	*create_t_nbr_from_integer(unsigned int i)
{
	t_nbr	*struct_nbr;

	struct_nbr = (t_nbr *)malloc(sizeof(t_nbr));
	struct_nbr->billions = i / ONE_BILLION;
	struct_nbr->millions = (i % ONE_BILLION) / ONE_MILLION;
	struct_nbr->thousands = (i % ONE_MILLION) / ONE_THOUSAND;
	struct_nbr->cdu = (i % ONE_THOUSAND);
	struct_nbr->c = (i % ONE_THOUSAND) / 100;
	struct_nbr->d = (i % 100) / 10;
	struct_nbr->u = (i % 10);
	return (struct_nbr);
}


int	get_filesize(char *filename)
{
	int		filedesc;
	char	initbuffer[5000];
	char	*mallocbuffer;
	int		size;
	int		len;

	filedesc = open(filename, O_RDONLY);
	if (filedesc == -1)
		return (0);//was NULL
	len = 1;
	size = 0;
	while (len != 0)
	{
		len = read(filedesc, initbuffer, 1000);
		size += len;
	}
	mallocbuffer = malloc(sizeof(char) * size);
	mallocbuffer[size + 1] = '\0';
	if (close(filedesc == -1))
			return (0);//was NULL
	free(mallocbuffer);
	return (size);
}


// GEORGE
char	*get_str_from_file(char *filename)
{
	int	filedesc;
	char	*buffer;
	int	size;
	int	readfile;
	
	filedesc = open(filename, O_RDONLY);
	if (filedesc == -1)
		return (0);//was NULL
	size = get_filesize(filename);
	buffer = malloc(sizeof(char) * size);
	readfile = read(filedesc, buffer, size + 1);
	buffer[size + 1] = '\0'; ///////////////
	close(filedesc);
	return (buffer);
}


/*
// DAW
char	*get_str_from_file(char *filename)
{
	int		filedesc;
	char	*buffer;
	int		retour;

	filedesc = open(filename, O_RDONLY);
	if (filedesc == -1)
		return (NULL);
	buffer = malloc(sizeof(char) * BUFF_SIZE);
	retour = read(filedesc, buffer, BUFF_SIZE);
	buffer[retour] = '\0';
	if (close(filedesc) == -1)
		return (NULL);
	return (buffer);
}
*/

int	count_lines(char *str)
{
	int	lines;
	int	i;

	lines = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			lines += 1;
		i++;
	}
	return (lines);
}

t_dico_elem	*create_struct_dico_elem(char *str)
{
	char		**temptab;
	t_dico_elem	*dico_elem;

	dico_elem = malloc(sizeof(t_dico_elem));
	temptab = ft_split(str, ":");
	if (!temptab)
		return (NULL);
	dico_elem->string_number = temptab[0];
	dico_elem->number = ft_atoi(temptab[0]);
	dico_elem->word = ft_trim(temptab[1]);
	return (dico_elem);
}
