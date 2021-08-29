#include<bits/stdc++.h>
using namespace std;
//19.Write a Program to check if two strings are Anagram or not
int main(){
    string s1,s2;
    int f=0,temp;
    cout<<"enter the two string"<<endl;
    cin>>s1>>s2;
    int l=s1.length();
    int l1=s2.length();

    for(int i=0;i<l;i++){
             for(int j=0;j<l-1;j++){
                   if(s1[j]>s1[j+1]){
                       temp=s1[j];
                       s1[j]=s1[j+1];
                       s1[j+1]=temp;
                   }
              }
            }
     //  cout<<s1<<endl;

       for(int i=0;i<l1;i++){
             for(int j=0;j<l1-1;j++){
                   if(s2[j]>s2[j+1]){
                       temp=s2[j];
                       s2[j]=s2[j+1];
                       s2[j+1]=temp;
                   }
              }
            }
     //  cout<<s2<<endl;
        for(int i=0,j=0;i<l,j<l1;i++,j++){
            if(s1[i]==s2[j]){
                f++;
            }
        }
        if(f==l&&f==l1)
        cout<<"anagram"<<endl;
        else
        cout<<" not anagram"<<endl;

    
    return 0;
}
