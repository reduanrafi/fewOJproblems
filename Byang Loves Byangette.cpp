#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    string s,s1="Byang",s2="Byangette";
    string ques1="Who loves Byang?",ques2="Who loves Byangette?";
    while(getline(cin,s)){
    if(s.size()==ques1.size()) cout<<s2<<endl;
    if(s.size()==ques2.size()) cout<<s1<<endl;
    }
    return 0;
}
