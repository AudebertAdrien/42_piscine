/*
 *
 *	EXECUTEZ	;		clean && cc main_test.c && ./a.out
 *						git add * && git commit -m "dsada" && git push
 *
 *	NOTES : 
 *
 *	MAX unsigned int  ::   4294967295
 *	
 *    	   4	   294        967  295
 *	billions  millions	thousands  cdu		
 *
 */



/*

    TODO ;
    - Faire des test de memoire apres chaque malloc
    - l'argument number est un char*   a convertinr en UNSIFNED int

*/

#include<stdio.h>
#include<stdlib.h>
#include "./ft.h"

// A COMPILER DANS LE MAKEFILE  :
#include "./fts_a_trier/fts_tests.c"
#include "./fts_a_trier/ft_atoi.c"
#include "./fts_a_trier/ft_split.c"
#include "./fts_print_letters/fts_print.c"
#include "./fts_dico/fts_dico.c"
#include "./fts_globales/fts_globales.c"



int	main(void)
{
    t_dico_elem **dico;

    dico = get_dico_from_filename("dico_english.dict");
   // dico = get_dico_from_filename("dico_french.dict");
   // dico = get_dico_from_filename("dico_xxxxxxxxxxxxxxxxxxxxxx.dict");

    if(!dico)
    {
        printf("--ERRUEUR DICO --- \n");
        return (0);
    }

    print_dico(dico);
    printf("\n\n\n");

    print_unsigned_int(dico, 4);
    print_unsigned_int(dico, 123);
    print_unsigned_int(dico, 4321);

    printf("\n\n\n");

	test_multiple_values(dico);
    printf("\n\n\n");

	free(dico);

    dico = get_dico_from_filename("dico_french.dict");
    print_dico(dico);
    printf("\n\n\n");
    test_multiple_values(dico);
    printf("\n\n\n");
	free(dico);


    dico = get_dico_from_filename("dico_espagnol.dict");
    print_dico(dico);
    printf("\n\n\n");
    test_multiple_values(dico);
    free(dico);
	return (0);
}
