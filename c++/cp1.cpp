//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// int main(){
//     std::cout<<"hii nidhi"<<std::endl<<"study"<<std::endl;
//     return 0;

// }

// 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x,y;
//     cin >> x >> y;
//     cout<<"x value"<<x<<"y value"<<y;
//     return 0;
// }

//  #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str;
//     getline(cin,str);
//     cout<<str;
//     return 0;
// }

//age adult or not
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x;
//     cin>>x;
//     if (x<=18){
//         cout<<"not adult";
//         }
//     else{
//         cout<<"adult";      
//     }
//     return 0;
// }

//grade
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int marks;
//     cin>>marks;
//     if (marks<=100 && marks>=80){
//         cout<<"A grade";
//         }
//     else if (marks<80 && marks>=60){
    
//         cout<<"B grade";      
//     }
//     else if (marks<60 && marks>=40){
    
//         cout<<"C grade";      
//     }

//     else if (marks<40 && marks>=20){
    
//         cout<<"D grade";      
//     }
//     else if (marks<20 && marks>=0){
//         cout<<"E grade";      
//     }
//     else{
//         cout<<"invalid";
//     }   
//     return 0;
// }


//nested f
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int age;
//     cin>>age;
//     if (age<18){
//         cout<<"not eligible for job";
//         }
//     else if(age<=57){
//         cout<<"eligible for job";
//         if(age>=55){
//             cout<<", but retirement soon";
//         }
//     }
//     else{
//         cout<<"retirement time";
//         }
//     return 0;

// }

//day 
// #include<bits/stdc++.h>
// using namespace std;    
// int main(){
//     int day;
//     cin>>day;
//     switch (day){
//         case 1:
//         cout<<"monday";
//         break;
//         case 2:
//         cout<<"tuesday";
//         break;
//         case 3:
//         cout<<"wednesday";
//         break;
//         case 4:
//         cout<<"thursday";
//         break;
//         case 5:
//         cout<<"friday";
//         break;  
//         case 6:
//         cout<<"saturday";
//         break;
//         case 7:
//         cout<<"sunday";
//         break;  
//         default:
//         cout<<"invalid";
//         break;
    
//     }
//     return 0;
// }

//arrays
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5];
//     cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
//     cout<<arr[3];
//     return 0;
// }   

//2d array
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[3][5];
//     arr[0][2]=35;
//     cout<<arr[1][2];
//     return 0;
// }   

//string
// #include<bits/stdc++.h>
// using namespace std;    
// int main(){
//     string s="nidhi";
//     int len=s.length();
//     cout<<s.size();
//     cout<<s[2];
//     s[len-1]='u';
//     cout<<s;    

//     return 0;
// }

//for loop
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int i;
//     for(i=1;i<=10;i+=5){
//         cout<<i<<endl;
//     }

//while
// int i=10;
// while (i>=0){
//     cout <<i;
//     i--;
// }
// return 0;
// }

// int i=10;
// do{
//     cout <<i;
//     i--;
// }while (i>=0);
// cout <<i;
// return 0;
// }


// function
// void printname(){
//     cout<<"nidhi";
// }
// int main(){
//     printname();
//     return 0;
// }

// void printname(string name){
//     cout<<"hey "<<name;
// }
// int main(){
//     string name;
//     cin>>name;
//     printname(name);
//     return 0;
// }



// int sumno(int a,int b){
//     int c=a+b;
//     return c;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<sumno(a,b);
//     return 0;

// }

//minimum
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int minimum=min(a,b);
//     cout<<minimum;
//     return 0;

// }

//pass by value
// void dothing(int num){
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
// }

// int main(){
//     int num;
//     cin>>num;
//     dothing(num);
//     cout<<num;
//     return 0;

// }


//pass by reference
// void dothing(int &num){
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
// }

// int main(){
//     int num;
//     cin>>num;
//     dothing(num);
//     cout<<num;
//     return 0;

// }

// void dosomething(int arr[],int n){
//     arr[0]+=100;
//     cout<<arr[0];
// }

// int main(){
//     int n=5;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     dosomething(arr,n);
//     cout<<arr[0];//arrys allows go with reference
//     return 0;

// }

// loops **

// void printstar(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }   
// }
void printstar(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }   
}

void print2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }   
}
void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }   
}
void print4(int n){
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <i; j++){
            cout << " ";
        }

        for(int j = 1; j <=2*n-(2*i-1); j++){
            cout << "*";
        }
        for(int j = 1; j <i; j++){
            cout << " ";  
        }  

        cout << endl;
    }   
}
void print5(int n){
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <=n-i; j++){
            cout << " ";
        }

        for(int j = 1; j <=2*i-1; j++){
            cout << "*";
        }
        for(int j = 1; j <=n-i; j++){
            cout << " ";  
        }  

        cout << endl;
    }   
}
void print6(int n){
    for(int i = 1; i <= 2*n-1; i++) {
        int stars = i;
        if(i>n) stars=2*n-i;

        for(int j = 1; j <=stars; j++){
            cout << "*";
        }
            cout << endl;
    }
}

void print7(int n){
    int start=0;
    for(int i = 1; i <= n; i++) {
        if(i%2==0) start=0;
        else start=1;

        for(int j = 1; j <=i; j++){
            cout << start;
            start=1-start;
        }
        cout << endl;
    }
}

void print8(int n){
    int space=2*n-2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
    } 

void print9(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
}  

void print10(int n){
    char ch='A';
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;
    }
}  

void print11(int n){
    for(int i=n;i>=1;i--){
        char ch='A';
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;
    }
}  

void print12(int n){
    for(int i=n;i>=1;i--){
        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
} 

void print13(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}  

void print14(int n){

    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
            }
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    }

void print15(int n){
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}  

void print16(int n){
    int inis =0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<=inis;j++){
            cout<<" ";
        }
         for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        inis+=2;
        cout<<endl;
    }
    inis=8;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<=inis;j++){
            cout<<" ";
        }
         for(int j=1;j<=i;j++){
            cout<<"*";
        }
        inis-=2;
        cout<<endl;
    }
} 


void print17(int n){
    int spaces= 2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars =i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n)spaces -=2;
        else spaces+=2;
    }
} 

void print18(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(i==0 || j==0 || i==n-1 || j==n-1) {
            cout<<"*";
        }
           else cout<<" ";
        }
        cout<<endl;
    }
}

void print19(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right= (2*n-2)-j;
            int bottom=(2*n-2)-i;
            cout << (n - min(min(top,bottom),min(left,right)));
        }
        cout<<endl;
    }
}
// int main(){
//     int n;
//     cin>>n;
//     // print5(n);
//     // print4(n);
//     print19(n);
//     return 0;
// }

//reverse a number// extraction of digits
int extraction(int num){
    int cunt=0;
    while(num>0){
        int lastdigit=num%10;
        cout<<lastdigit;
        cunt+=1;
        num/=10;
    }
    cout<<endl;
    return cunt;
}

//  if no is 1234000 its reverse will be 4321
int reverseno(int num){
    int reverse=0;
    while(num>0){
        int lastdigit=num%10;
        reverse=reverse*10+lastdigit;
        num/=10;
    }
    return reverse;
}

// check palindrome
int checkPalindrome(int num){
    int rev=num;
    int reversen=0;
    while(num>0){
        int lastdigit=num%10;
        reversen=reversen*10+lastdigit;
        num/=10;
    }
    if (rev==reversen){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;

    }
//armstrong number
int isarmstrong(int num){
    int orignalnum=num;
    int temp=num;
    int sum=0;
    int count=0;
    while(temp>0){
        temp/=10;
        count++;
    }
    temp=num;
    while (temp>0){
        int lastdigit=temp%10;
        int power=1;
        for(int i=1;i<=count;i++){
            power*=lastdigit;
            }
        sum+=power;
        temp/=10;
    }
    if (sum==orignalnum){
        cout<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }
    return 0;

}
//O(N) solution for Division of a number
// int alldivision(int num){
//     for(int i=1;i<=num;i++){
//         if (num%i==0){
//             cout<<i<<" ";
//         }
//     }
// }

int alldivision(int num){
    vector<int> ls;
    for(int i=1;i*i<=num;i++){
        if (num%i==0){
            ls.push_back(i);
            if(i!=num/i) ls.push_back(num/i);
        }
    }   
    sort(ls.begin(), ls.end());
    for(auto div : ls) cout << div << " ";
}

//check prime number
int isprime(int num){
    int count=0;

    for(int i=1;i*i<=num;i++){
        if (num%i==0) {
            count++;
            if(i!=num/i) count++;
        }
    }
    if(count==2){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    
}

//gcd of two numbers by euclidean algorithm
int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    else return a;
}

//recursion
//base condition
void printint(int count){
    if(count==5) {
        return;
    }
    cout <<count;
    printint(count+1);

}
int main(){
    // int num;
    // cin>>num;
    // cout<<extraction(num)<<endl;
    // cout<<reverseno(num)<<endl;
    // checkPalindrome(num);
    // isarmstrong(num);
    // alldivision(num);
    // isprime(num);
    // int a,b;
    // cin>>a>>b;
    // cout<<gcd(a,b);
    printint(0);
    return 0;
}

