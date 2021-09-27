#include <stdio.h>

int main(void)
{
int intType;
float floatType;
char charType;
long int longType;
long long int llType;
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(llType));
printf("Size of float: %zu bytes\n", sizeof(floatType));


return (0);
}
