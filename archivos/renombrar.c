#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char **argv) {
    char * file = argv[1];
    char * newf = argv[2];
  
    link(file,newf);
    int succ = unlink(file);

   
}