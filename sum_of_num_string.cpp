//15.Write a Program to Count the sum of numbers in a string
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int sum=0,count=0;
    cout<<"enter the string for sum"<<endl;
    cin>>s;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='0'&&s[i]<='9'){
        sum=sum+s[i]-'0';
        }
    }
    cout<<"sum of string :"<<sum<<endl;
    return 0;
}