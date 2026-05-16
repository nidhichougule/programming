/*area of circle
#include<stdio.h>
int main()
{
    float r;
    printf("enter r");
    scanf("%f",&r);
    printf("area if circle is: %f",3.14*r*r);
    return 0;
}
*/
/* cube of no.
#include<stdio.h>
int main()
{
    float r;
    printf("enter r");
    scanf("%f",&r);
    printf("cube of no.: %f",r*r*r);
    return 0;
}
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,power;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    power = (int)pow(a, b);
    printf("cube of no.: %d",power);
    return 0;
}