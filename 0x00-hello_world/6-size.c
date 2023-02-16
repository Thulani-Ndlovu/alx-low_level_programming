#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
printf("Size of a char: %lu",sizeof(char));
printf(" byte(s)\n");  
printf("Size of a int: %lu",sizeof(int));
printf(" byte(s)\n");
printf("Size of a long: %lu",sizeof(long int));
printf(" byte(s)\n");  
printf("Size of a long long int: %lu",sizeof(long long int));
printf(" byte(s)\n");
printf("Size of a float: %lu",sizeof(float));
printf(" byte(s)\n");
return (0);
}
