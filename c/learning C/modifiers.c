#include<stdio.h>

/*auto - Automatic*/
/* After completion of Function automatic variable gets destroyed*/
/* this type of variable dont waste any memory*/

int main()
{
    auto int var;
    printf("%d",var);
}


/* Extern - External */
/* used when a particular file needs to access a
 variable from another file during a project */
 /* For extern variable no memory is allocated */
 /* Multiple declaration is allowed but not for auto*/
 /* compiler believes that whatever the external variable 
 said is true and produces no error but linker throws an error 
 when finds no such variable exists*/
 /* when extern varaible is initialised then memory is allocate 
 for this variable and considered defined*/