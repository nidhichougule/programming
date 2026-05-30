//hashing
#include <bits/stdc++.h>
using namespace std;
int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];    
//     }
//     //precompute
//     int hash[13]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         cout<<hash[number]<<endl;
//     }
//     return 0;

// }


//hash string
    string s;
    cin>>s;
    //precompute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    char q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
    return 0;

}