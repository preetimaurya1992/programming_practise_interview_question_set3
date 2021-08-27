//10.Write a Program to check if String is a palindrome or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,rev;
    cout<<"enter the string"<<endl;
    cin>>s;
    string original=s;
    int n=s.length();
    
    for(int i=n-1;i<=0;i--){
         //rev[i]=s[i];
         cout<<s[i]<<endl;
    }
       if(s==original)
       cout<<"palindrome"<<endl;
       else
       cout<<"not palindrome"<<endl;
         for(int i=n-1;i<=0;i--){
         //rev[i]=s[i];
         cout<<s[i]<<endl;
    }
       if(s==original)
       cout<<"palindrome"<<endl;
       else
       cout<<"not palindrome"<<endl;
    return 0;
}