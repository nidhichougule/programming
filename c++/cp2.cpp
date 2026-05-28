#include<bits/stdc++.h>
using namespace std;

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
    printint(0);
    return 0;
}