#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int ans;
if (ans = (n % 10) > 5)
{
printf("Last digit of %d is %d and is greater that 5", n, ans);
}
else if (ans = ((n % 10) < 6) && (n % 10) !=0)
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, ans);
}
else
{
ans = 0;
printf("Last digit of %d is %d and is 0", n, ans);
}
return (0);
}
