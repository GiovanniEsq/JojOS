#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

int infinito=1;

void signalHandler(int signalNumber){
    printf("Signal received %d \n", signalNumber);
    infinito=0;
}

int main(){
    int pid;
    //le dice "ejecuta signal handler cuando se mande un 10 a un prioceso"
    signal(10, signalHandler);
    //aquí clona el proceso actual, creando una copia similar, el fork regresa el pid.
    pid = fork();
    if(pid == 0){
        printf("Soy el hijo\n");
        while(infinito){
            printf("dentro del infinito\n");
            sleep(1);
        }
        printf("ya saliste\n");
    }else{
        printf("Soy el padre\n");
        sleep(2);
        //kill le manda la señal 10 al hijo, (lo que ejecuta signalHandler) sí no está definida la señal enviada(10)
        //entonces el proceso muere
        kill(pid, 10);
        for(;;);
    }
}