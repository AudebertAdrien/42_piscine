#ifndef FT_H
# define FT_H


# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h> ////////////////////////////
# include <sys/stat.h>  ////////////////////////////
# include <fcntl.h>  ////////////////////////////


typedef struct s_soluce
{
     int       row_index;
     int       col_index;
     int      	size;
}		t_soluce;

typedef struct s_map 
{
	int row_count;
	int col_count;
	char empty;
	char full;
	char	obstacle;
	char	**rows;
	t_soluce	soluce;
}		t_map;


void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
char	**ft_split(char *str, char *charset);


t_map	*ft_map_create_from_str(char *str);
void	ft_map_print(t_map	*map);
void	ft_map_create_solve_print(char *str);



#endif
