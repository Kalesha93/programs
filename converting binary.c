#include <stdio.h>
#include<math.h>
int main() {
    int N,a=1,ans=0;
    printf("Enter the N value :");
    scanf("%d",&N);
    while(N !=0){
        ans=ans+(N%10)*a;
        N=N/10;
        a=a*2;
    }
    printf("%d",ans);

    return 0;
}
