/*//wcp for is adualt or not
#include<stdio.h>
int main()
{
    int age;
    printf("enter age: ");
    scanf("%d",&age);
    if(18<=age){
        printf("ia adualt");
    }
    else{
        printf("still minor");
    }
    return 0;
}*/
//else if
/*
#include<stdio.h>
int main()
{
    int age;
    printf("enter age: ");
    scanf("%d",&age);
    if(18<=age){
        printf("ia adualt");
    }
    else if(18>=age&& 13<=age){
        printf("teenager");
    }
    else{
        printf("still child");
    }
    return 0;
}*/
//conditional operator(ternary)
/*#include<stdio.h>
int main()
{
    int age;
    printf("enter age: ");
    scanf("%d",&age);
    (18<=age)?printf("is adult"):printf("not adult");
    return 0;
}*/
//print day using switch conditional poerator
#include<stdio.h>
int main()
{
    int day;
    printf("enter day in 1-7 no: ");
    scanf("%d",&day);
    switch(day){
        case 1:printf("monday");
        break;
        case 2:printf("tuesday");
        break; 
        case 3:printf("wednesday");
        break;
        case 4:printf("thursday");
        break;
        case 5:printf("friday");
        break;
        case 6:printf("saturday");
        break;
        case 7:printf("sunday");
        break;
        default:printf("not a day");
    }
        return 0;
}