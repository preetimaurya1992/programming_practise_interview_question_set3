//14.Write a Program to Remove spaces from a string
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s2;
    int j=0;
    cout<<"enter the strings for removing spaces"<<endl;
    getline(cin,s);
    int n=s.length();
    for ( int i=0; i < n-1; i++)
    {
        if(s[i]!=' '){
           s[j++]=s[i];
        }
    }
    s[j]='\0';
    cout<<s<<endl;
    return 0;
}