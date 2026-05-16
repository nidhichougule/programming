//20-2-2026
/*
//wcp for student pass or fail (using if, else if, else)
#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks \n");
    scanf("%d",&marks);
    // if (marks>30 && marks<=100){
    //     printf("student is pass\n");
    // }else if (marks>0 && marks<=30){
    //     printf("student is fail\n");
    // }else{
    //         printf("wrong marks\n");
    //     }
    marks<=30 ? printf("fail\n") : printf("pass\n");//ternary operater

    return 0;
}

//wcp for checking alphabet upper/lower case
#include<stdio.h>
int main()
{
    char ch;
    printf("enter alphabet\n");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z'){
        printf("is upper case");
    }
    else if (ch>='a' && ch<='z'){
        printf("is lower case");
    }
    else {
        printf("is not english alphabet");
    }
    return 0;
}*/

//LOOP CONTROL INSTRUCTION
/*[//FOR LOOP
#include<stdio.h>
int main()
{
    //int i;
    for(i=1;i<=10;i++){
        printf("Hello World\n");
    }
   for(float i=1.55;i<=10.55;i++){
        printf("%f\n",i);
   }
   for(char j='Z';j>='A';j--){
        printf("%c\n",j);
    }
    return 0;
}
]*/
/*
//WHILE LOOP
//Q wcp print 0 to n , if n is given by user 
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter n: ");
    scanf("%d",&n);
    i=1;
    while (i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}
    */

//DO WHILE LOOP
// print 0 to 5
#include<stdio.h>
int main()
{
    int i=1;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=10);
    return 0;
}