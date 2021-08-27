//9. Write a Program to Remove vowels from a string
#include<bits/stdc++.h>
using namespace std;
int check_vowels(string s){
    for(int i=0;s[i]!='\0';i++){

     if(s[i]!='a'||s[i]!='e'||s[i]!='i'||s[i]!='o'||s[i]!='u'||
        s[i]!='A'||s[i]!='E'||s[i]!='I'||s[i]!='O'||s[i]!='U')
        {
           return 1;
        }
    
        else
        return 0;
    }
}


int main(){
    string s,s2;
    cout<<"enter the stirng"<<endl;
    cin>>s>>s2;
    for(int i=0;s[i]!='\0';i++){
        if(check_vowels(s[i])==0){

        }
    }
    return 0;
}