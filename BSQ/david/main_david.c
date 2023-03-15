


// #include "./src_david/ft_create_map_from_str.c" ////////////////////////////
// #include "./src_david/fts_globales.c"       ////////////////////////////

#include "./src_david/ft.h"

char	*create_fake_str_map()
{
	char *str_map = "9.ox\n...........................\n....o......................\n............o..............\n...........................\n....o......................\n...............o...........\n...........................\n......o..............o.....\n..o.......o................";
	return (str_map);
}






int	main(int argc, char **argv)
{
	int i;

	if (argc < 2 )
	{
		ft_putstr("ERROR ??? argc < 2");
		return (0);
	}

	i = 1;
	while (i < argc)
	{

		ft_map_create_solve_print(create_fake_str_map());	
		i++;
	}


	return (0);
}