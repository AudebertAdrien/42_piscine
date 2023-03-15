#include "./ft.h"
# include <stdlib.h>


void	ft_map_create_solve_print(char *str)
{

	t_map	*map;

	
	map = ft_map_create_from_str(str);
	ft_map_print(map);

}

