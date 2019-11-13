#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char **argv) {
    char * arc = argv[1];
    char * dir = getcwd(NULL,0);

    char filePath[strlen(arc)+strlen(dir) + 2];

    sprintf(filePath, "%s/%s", dir, arc);

    unlink(filePath);


}