#include <stdio.h>
#include<stdbool.h>
int main() {
    int n=3;
    int cnt=0;
    if(n<=1)
    printf("%d is not prime number\n",n);
    else{
        for(int i=1;i<=n;i++){
            if(n%i==0)
            cnt++;
        }
        if(cnt>2)
        printf("%d is not an prime number",n);
        else
        printf("%d is a prime number",n);
    }
return 0;
}
