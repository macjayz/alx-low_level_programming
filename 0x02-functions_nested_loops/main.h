#include <unistd.h>


int _putchar(char n)
{
	return (write(1, &n, 1));
}
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
