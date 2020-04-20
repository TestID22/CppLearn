#include <stdio.h>
#include <time.h>

struct person
{
    char *name;
    int age;   
    
};

void dump_structure(struct person *tm_struct, int size){
    int i;
    unsigned char *raw_ptr;
    raw_ptr = (unsigned char *)tm_struct;
    for(i = 0; i < size; i++){
        printf("02x", raw_ptr[i]);
        raw_ptr++;
    }

}

int main(){
    struct person Alex, *alex_ptr;
    Alex.age = 2;
    Alex.name = "Alex";
    alex_ptr = &Alex;
    printf("0x%08x\n", Alex.name);
    dump_structure(alex_ptr, sizeof(struct person));
    return 0;
}


