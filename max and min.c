#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    printf("Enter a value:");
    scanf("%d",&a);
    printf("Enter b value:");
    scanf("%d",&b);
    printf("max = %d\n", ((a + b) + abs(a - b)) / 2);
    printf("min = %d", ((a + b) - abs(a - b)) / 2);
    return 0;
}
