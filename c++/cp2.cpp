#include<bits/stdc++.h>
using namespace std;

//recursion
//base condition
// void printint(int count){
//     if(count==5) {
//         return;
//     }
//     cout <<count;
//     printint(count+1);

// }

//print name n times using recursion
void printname(int i,int n){
    if(i>n) {
        return;
    }
    cout <<"nidhi"<<endl;
    printname(i+1,n);

}

//print 1 to n times using recursion
void printno(int i,int n){
    if(i>n) {
        return;
    }
    cout <<i<<endl;
    printno(i+1,n);

}


//print n to 1 times using recursion
void revprintno(int i,int n){
    if(i<1) {
        return;
    }
    cout <<i<<endl;
    revprintno(i-1,n);

}
//print 1 to n times using recursion using backtracking
void bprintno(int i,int n){
    if(i<1) {
        return;
    }
    bprintno(i-1,n);
    cout <<i<<endl;
}

//print n to 1 times using recursion using backtracking
void brprintno(int i,int n){
    if(i>n) {
        return;
    }
    brprintno(i+1,n);
    cout <<i<<endl;
    

}
//recursive sum of n numbers(parameterised)
void sumn(int i,int sum){
    if(i<1) {
        cout<<sum;
        return;
    }
    sumn(i-1,sum+i);
}

//recursive sum of n numbers(non parameterised/functional)
int sum(int n){
    if(n==0) {
        return 0;
    }
    return n+sum(n-1);
}

int fac(int n){
    if(n==0) {
        return 1;
    }
    return n*fac(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fac(n);
    return 0;
}