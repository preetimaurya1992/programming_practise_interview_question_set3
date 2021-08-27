//5. Write a Program to print the length of a string.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int count=0;
    cout<<"enter the string"<<endl;
    cin>>s;
    for(int i=0;s[i]!='\0';i++){
       count++;
    }
    cout<<count<<endl;
    return 0;
}
