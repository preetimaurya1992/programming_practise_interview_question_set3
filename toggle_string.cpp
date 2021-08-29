//8. Write a Program to Toggle each character in a string
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char a='z';
    int b=a;
    cout<<"enter the string"<<endl;
    //cin>>s;
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]=s[i]-32;
        }

      else if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]+32;
        }

    }
    cout<<s<<endl;
    cout<<a<<b<<endl;
    return 0;
}