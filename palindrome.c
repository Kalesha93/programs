#include <stdio.h>
void check_palindrome(int N)
{
    int T = N;
    int rev = 0;
    while (T != 0) {
        rev = rev * 10 + T % 10;
        T = T / 10;
    }
    if (rev == N)
        printf("%d is palindrome\n", N);
    else
        printf("%d is not a palindrome\n", N);
}
int main()
{
    int N,M;
    printf("Enter the N value:");
    scanf("%d",&N);
    printf("Enter the M value:");
    scanf("%d",&M);
    check_palindrome(N);
    check_palindrome(M);
    return 0;
}
