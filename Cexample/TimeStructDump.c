#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void dump_time_struct(struct tm *time, int size)
{
    int i; //counter
    unsigned char *raw_ptr;
    raw_ptr = (unsigned char *)time;
    for(i = 0; i < size; i++){
        printf("%02x ", raw_ptr[i]);
        if(i % 16 == 15){
            printf("\n");
        }
    }
};

int main(){
    struct tm time, *p_time;
    p_time = &time;
    dump_time_struct(p_time, sizeof(struct tm));
    return 0;    
}