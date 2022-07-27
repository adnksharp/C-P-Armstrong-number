#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char str[100];
    unsigned long k = 0;
    printf("Números de Armstrong\nnúmero: ");
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
        k += pow(((long)str[i] - 48), strlen(str));
    printf("%lu", k);
    if (k == atoi(str))
        printf(" es un número de Armstrong\n");
    else
        printf(" no es un número de Armstrong\n");
    return 0;
}