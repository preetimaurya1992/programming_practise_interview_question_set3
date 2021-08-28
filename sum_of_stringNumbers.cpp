#include<bits/stdc++.h>
using namespace std;
// sum of string numbers.for example {12 3 8 120}
//12+3+8+120=143
int main(){
    string s;
    long sum=0,j=10,total=0;
    int i;
    cout<<"enter number string"<<endl;
    getline(cin,s);
    for (int i=0;s[i]!='\0';i++)
    {       if(s[i]!=' '){
            sum=sum+(s[i]-'0');
            sum=sum*j;
           }
           else{
               sum=sum/j;
               total=total+sum;
                sum=0;
           }
    }

    cout<<total<<endl;   
    return 0;
}

