#include <stdio.h>
 
int main(void)
{
    int n = 5;
    int i, j;
 
    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++) {
            printf(" ");
        }
 
        for (j = 1; j <= n; j++) {
            printf("*");
        }
 
        printf("\n");
    }
 
    return 0;
}
