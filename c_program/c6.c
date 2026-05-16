/* 6-02-2026
conversion -(1.implicit by complier and 2. explicit by user or extenal )
example we converting forcefully double to int

#include<stdio.h>
#include<math.h>
int main()
{
    int a=(int)1.99999;
    printf("%d",a);
    return 0;
}
*/


/* associativity (for same precedence)
#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    //ARITHMATIC OPERATERS
    //a=4*3/6*2;
    //a= 5*2/2*3;
    //a= 5*(2/2)*3;
    a= 5+2/2*3;
    printf("%d\n",a);
    return 0;

}
*/


/*
RELATIONAL OPERATERS
#include <stdio.h>
int main()
{
    printf("%d",4==4);
    printf("%d",4>=8);
    printf("%d",4<=4);
    printf("%d",5>=4);
    printf("%d",4!=4);
    printf("%d",2!=4);
    return 0;
}
*/
#include <stdio.h>
int main()
{
    printf("%d",4==4 && 5<7);
    printf("%d",4>=8 || 2<1);
    printf("%d",4>=8 ||!(10>5));
    return 0;
}