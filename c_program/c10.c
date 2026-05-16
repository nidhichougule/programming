//3-3-26
// sum of n numbers
/*
#include<stdio.h>
int main()
{
    int n,i,sum =0;
    printf("enter n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum= sum+i;
    }
    printf("%d",sum);
    return 0;
}
*/
//print reverse no
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter n");
    scanf("%d",&n);
    for(i=n;i>=0;i--){
        printf("%d",i);
    }
    return 0;
}