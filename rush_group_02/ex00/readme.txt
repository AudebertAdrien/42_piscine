Main

Char * dicoFilename // défaut : "number.dict"
Char * stringNumber
Unsinged int nbr
StructureKeyValue *dico

/*
   Dico est un tableau de StructureKeyValue

   Une StructureKeyValue c'est une paire 
        7 : "sept"
        Cad une ligne du fichier
*/

If argc == 2
     stringNumber = argv 1
If argc == 3
     stringNumber = argv 2
     dicoFilename = argv 1
Else
     Error
     Return


nbr = atoi(stringNumber)

If ! Nbr
     Error
     Return

Dico = getDico(dicoFilename)


If ! Dico
     ErrorDico
     Return

print_numbers_in_letters(dico, nbr)



















Dico

[a number][0 to n spaces]:[0 to n spaces][any printable characters]\n

Numbers are to be handled the same way atoi handles them.
Pas FT atoi


 You will trim the spaces before and after the value in the dictionary.

 The dictionary will always have at least the keys as in the reference dictionary. Their value can be modiﬁed, more entries can be added, but the initial keys can’t be removed.

 You only need to use the initial entries (For instance, if we add 54: fifty-four, you still have to use 50: fifty and 4: four)

 The entries of the dictionary can be stored in any order.

 There can be empty lines in the dictionary.

 If you have any errors from the dictionary parsing, your program must output "Dict Error\n"
