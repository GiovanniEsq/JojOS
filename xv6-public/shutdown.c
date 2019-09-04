#include "types.h"
#include "stat.h"
#include "user.h"

int main(){
    //aqui va una función que compile una interrupción a fin de que el kernel se ejecute y apage nuestro hardware
    shutdown();
    exit();
}