//2. Write a Program to reverse a string.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the string for reverse"<<endl;
    cin>>s;
     int l=s.length();
     for(int i=l-1;i>=0;i--){
         cout<<s[i];
     }
    cout<<endl;
    return 0;
}