#include <stdio.h>

int main(){
    FILE *f = fopen("binary", "r+b");
    unsigned char opcode = 0x74;
    fseek(f, 0x401560, SEEK_SET);
    fwrite(&opcode, sizeof(opcode), 1, f);
    fclose;
    return 0;
}