#include <stdio.h>
#include "./libhello.h"

/*cuando veas un char * es un string (cadena de caracteres), el '*' es un tipo de dato tipo apuntador
 */


int main(int argc, char**argv){
    int i = 0;
    for(i=1;i<argc;i++){
    printHello(argv[i]);
    }
    return 0;
}