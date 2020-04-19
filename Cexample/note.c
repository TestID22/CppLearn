#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int fd;
	char *data;
	fd = open("d:\\test", O_WRONLY|O_CREAT|O_APPEND, S_IRUSR|S_IWUSR);
	data = (char *) malloc(10);
	data = "hello";
	fwrite(fd, data, strlen(data));
	return 0;
}
