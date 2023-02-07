#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>  
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int create_file(const char *filename, char *text_content)
{
int fd, rd, wr, len;
char * buff;

if (text_content == NULL)
text_content = "";

len = strlen(text_content);

if (!filename)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY,  0600);

if (fd == -1)
return (-1);

wr = write(fd, text_content, len);

close(fd);
return (1);
}
