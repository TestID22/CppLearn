#include <stdio.h>
#include <stdlib.h>

void usage(char *program_name){
    printf("Enter more arg FILE:%s", program_name);
    exit(1);
}


int main(int argc, char *argv[]){
    int count;

    if(argc < 3){
        usage(argv[0]);
    }

    count = atoi(argv[2]);
    for(int i = 0; i < count; i++){
        printf("%3d, %s", i,argv[1]);
    }
    return 0;
}