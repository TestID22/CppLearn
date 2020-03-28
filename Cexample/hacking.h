

void fatal(char *message){
    char error_message[100];
    strcpy(error_message, "[!!] Критическая ошибка");
    strncat(error_message, message, 83);
    perror(error_message);
    exit(-1);
}

//обертка malloc с проверкой ошибок

void *er_malloc(unsigned int size){
    void *ptr;
    ptr = malloc(size);
    if(ptr == NULL){
        fatal("в функции er_malloc");
    }else
    {
        return ptr;
    }
}