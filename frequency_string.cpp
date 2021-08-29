//17.Write a Program to calculate the Frequency of characters in a string
#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    string s;
    char c;
    cout<<"enter the string"<<endl;
    getline(cin,s);
    cout<<"enter the key for frequency"<<endl;
    cin>>c;
    for(int i=0;s[i]!='\0';i++){
            if(s[i]==c){
                count++;
            }
    }
    cout<<"key :"<<c<<endl<<"frequncy :"<<count<<endl;
    return 0;
}