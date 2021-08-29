//11.Write a Program to Sort a string in alphabetical order
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cout<<"enter the string for sort"<<endl;
    cin>>s1;
    int l=s1.length();
    int temp;
    for(int i=0;i<l;i++){
             for(int j=0;j<l-1;j++){
                   if(s1[j]>s1[j+1]){
                       temp=s1[j];
                       s1[j]=s1[j+1];
                       s1[j+1]=temp;
                   }
              }
            }
cout<<"after sorting string :"<<s1<<endl;
    return 0;
}