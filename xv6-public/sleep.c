#include "types.h"
#include "user.h"

int main(int argc, char *argv[]){
    if(argc<2){
        exit();
    }
    int secdor = atoi(argv[1]);
    if(secdor<=0){
        exit();
    }else{
        sleep(atoi(argv[1])*100);
    }
    exit();
}