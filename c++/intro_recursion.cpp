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
//factorial of n using recursion
int fac(int n){
    if(n==0) {
        return 1;
    }
    return n*fac(n-1);
}
//reverse an array using recursion
void revarray(int i,int n,int arr[]){
    if(i>=n/2) {
        return;
    }
    swap(arr[i],arr[n-i-1]);
    revarray(i+1,n,arr);
}
//check if a string is palindrome using recursion
bool ispalandrome(int i,string s){
    if(i>=s.size()/2) {
        return true;
    }
    if(s[i]!=s[s.size()-i-1]){
        return false;
    }
    return ispalandrome(i+1,s);
}

//fibonacci series using recursion
int fib(int n){
    if (n<=1) return n;
    return fib(n-1)+fib(n-2);
}

//sequence
void printf(int i,vector<int>& ds,int arr[],int n){
    if(i==n){
        for (auto it:ds){
            cout<<it<<" ";
        }
        if (ds.size()==0) cout<<"{}";
        cout<<endl;
        return;

    }
    ds.push_back(arr[i]);
    printf(i+1,ds,arr,n);
    ds.pop_back();
    printf(i+1,ds,arr,n);   
}


void printsum(int i,vector<int>& ds,int arr[],int n,int sum,int s){
    if(i==n){
        if (s==sum){
            for (auto it:ds)
                cout<<it<<" ";
                cout << endl; 
        }
        return;
    }
    ds.push_back(arr[i]);
    s+=arr[i];
    printsum(i+1,ds,arr,n,sum,s);

    s-=arr[i];
    ds.pop_back();

    printsum(i+1,ds,arr,n,sum,s);  
}


bool printsum1(int i,vector<int>& ds,int arr[],int n,int sum,int s){
    if(i==n){
        if (s==sum){
            for (auto it:ds){
                cout<<it<<" ";
                cout << endl;
                return true;
            }
            
        }
        return false;
    }
    ds.push_back(arr[i]);
    s+=arr[i];
    if(printsum1(i+1,ds,arr,n,sum,s)) return true;

    s-=arr[i];
    ds.pop_back();

    if(printsum1(i+1,ds,arr,n,sum,s)) return true;
    return false;
}


int printsum3(int i,int arr[],int n,int sum,int s){
    if(i==n){
        if (s==sum) return 1;
        else return 0;
    }
    s+=arr[i];
    int l=printsum3(i+1,arr,n,sum,s);

    s-=arr[i];

    int r=printsum3(i+1,arr,n,sum,s);
    return l+r;

}


int main(){
    int n=3;
    int arr[]={1,1,2};
    cout<< printsum3(0,arr,n,2,0);
    return 0;
}