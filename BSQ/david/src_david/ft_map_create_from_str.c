#include "./ft.h"
# include <stdlib.h>


t_map	*ft_map_create_from_str(char *str)
{

	t_map	*map;

	map = malloc(sizeof(map));


	// Lire la 1ere ligne de str_map

	int i = 0;


	while(str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}
	

	map->row_count = ft_atoi(str);
	map->empty = str[i];
	map->obstacle = str[i + 1];
	map->full = str[i + 2];



	//ft_putstr("\n\n\n\n");


	char	**tab_lignes;

	tab_lignes = ft_split(str, "\n");

	map->col_count = ft_strlen(tab_lignes[1]);
	map->rows = malloc(sizeof(char *) * map->row_count );

	// on zappe la 1ere ligne
	i = 1;
	while (i <= map->row_count )
	{
		map->rows[i-1] = tab_lignes[i];

		i++;
	}


	//ft_putstr("\n\n");

	//ft_map_print(map);


	return (map);
}

