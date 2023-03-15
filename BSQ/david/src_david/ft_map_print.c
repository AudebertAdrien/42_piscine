
#include "./ft.h"
# include <stdlib.h>


void	ft_map_print(t_map	*map)
{

	


	int i = 0;

	ft_putstr("\n\n");

	ft_putstr("- map->empty : ");
	ft_putchar(map->empty );
	ft_putstr("\n");
	ft_putstr("- map->obstacle: ");
	ft_putchar(map->obstacle);
	ft_putstr("\n");
	ft_putstr("- map->full: ");
	ft_putchar(map->full);
	ft_putstr("\n");
	ft_putstr("- map->row_count: ");
	ft_putnbr(map->row_count);
	ft_putstr("\n");
	ft_putstr("- map->col_count: ");
	ft_putnbr(map->col_count);



	ft_putstr("\n\n");


	ft_putstr("\n\n\n\n");


	i = 0;
	while (i < map->row_count )
	{

		ft_putstr(map->rows[i]);
		ft_putstr("\n");	// mettre 2 \n pour que ca ressemble a un carre
		i++;
	}



}

