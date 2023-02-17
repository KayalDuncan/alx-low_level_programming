#include <stdio.h>
/*
 *main - a program that print the computer it can be run and compiled on
 *Return (0) : success
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("size of a char: %zu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a char: %zu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a char: %zu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a char: %zu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a char: %zu byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
