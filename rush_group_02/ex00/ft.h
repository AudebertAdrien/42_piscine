/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:55:57 by aaudeber          #+#    #+#             */
/*   Updated: 2022/11/20 17:36:28 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H


//// GLOBALES  ::::::::::::

#define ONE_THOUSAND 1000
#define ONE_MILLION 1000000
#define ONE_BILLION 1000000000

#define BUFF_SIZE 4098
#define MESSAGE_ERROR "Error\n" 	//  If the argument isn’t a valid unsigned integer
#define MESSAGE_ERROR_DICT "Dict Error\n"

//// STUCTURES  ::::::::::::

typedef struct s_nbr
{
	int  u;
	int  d;
	int  c;
	int  cdu;
	int	thousands;
	int	millions;
	int	billions;
}		t_nbr;


typedef struct s_dico_elem
{
	char  *string_number;  	// ex ; "10"
	int  number;  		// ex ; 10
	char  *word;  		// ex ; "dix"
}		t_dico_elem;


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


//   fts_dico ::
t_nbr	*create_t_nbr_from_integer(unsigned int i);
void	print_dico_from_filename(char *filename);
t_dico_elem **get_dico_from_filename(char *filename);
t_dico_elem	*create_struct_dico_elem(char *str);
int	count_lines(char *str);
char	*get_str_from_file(char *filename);

//   fts_globales ::
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
char	*ft_trim(char *str);
char	*find_in_dico(t_dico_elem **dico, int key);
int	ft_count_leading_spaces(char *str);
int	ft_strlen(char *str);
char	**ft_split(char *str, char *charset);
char	*ft_trim(char *str);

//   fts_print ::
void	print_integer_in_letters(t_dico_elem **dico, unsigned int i);


//   fts_test ::
void	test_multiple_values(t_dico_elem **dico);
void    print_struct_number_with_space(t_nbr *st_nbr);


//   fts_unused ::
void	print_unsigned_int(t_dico_elem **dico, unsigned int i);
int	ft_atoi(char *str);
// split
int	count_words(char *str, char *charset);
int	index_is_ze_debut_of_a_new_word(char *str, char *charset, int index);
int	get_index_next_sep(char *str, char *charset, int start_index);
char	*create_word(char *str, int start, int end);

#endif
