

clear && gcc -Werror -Wextra -Werror   \
	main_david.c \
	./src_david/fts_globales.c    \
	./src_david/ft_atoi.c     \
	./src_david/ft_split.c    \
	./src_david/ft_map_print.c    \
	./src_david/ft_map_create_from_str.c     \
	./src_david/ft_map_create_solve_print.c  
	



echo "\n\n============================\n\n"

echo "./a.out"
./a.out 



echo "\n\n============================\n\n"


echo "./a.out ''./maps/map01.txt''"
./a.out "./maps/map01.txt"




echo "\n\n============================\n\n"


# echo "./a.out ''./maps/map01.txt''  ''./maps/map02.txt''     ''./maps/map02.txt'' "
# ./a.out "./maps/map01.txt" "./maps/map02.txt" "./maps/map02.txt"




echo "\n\n============================\n\n"

