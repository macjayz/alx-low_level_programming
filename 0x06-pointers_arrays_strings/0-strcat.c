#include "main.h"
#include <string.h>
/**
 *_strcat - function that concatenates two strings.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *author: oludami08
 *Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
