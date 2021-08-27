//6. Write a Program to compare two strings.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cout<<"enter the two string for compare"<<endl;
    cin>>s1>>s2;
    int n=s1.length();
    int m=s2.length();
    int i,j,f=0;
    for (i=0,j=0;i<n-1,j<m-1;i++,j++)
    {
       if(s1[i]==s2[j])
       f++;
    }
    if(f==n&&f==m)
    cout<<"match the string"<<endl;
    else
    cout<<"not match string"<<endl;
    return 0;
}