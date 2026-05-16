//10-02-2026
//divide by 2
/*
#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("enter the no.: ");
    scanf("%d",&a);
    a/=2;
    printf("the a is now %d",a);
    return 0;
}
*/

//divide by 2 or not
/*
#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("enter the no.: ");
    scanf("%d",&a);
    printf("%d ",a%2==0);
    return 0;
}
*/

/*print true 1 or false 0 for following smt* a. its sunday and its snowing b.*/

#include<stdio.h>
int main()
{
    int sunday=1, snowing=1;
    int monday=0, raining=1;
    printf("%d",sunday && snowing);
    printf("%d",monday || raining);
    return 0;
}
