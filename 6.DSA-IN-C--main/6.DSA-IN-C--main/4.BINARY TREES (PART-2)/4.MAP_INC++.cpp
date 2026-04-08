#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
    {
map<int,string> m;
m[101]="rahul";
m[199]="alina";
m[131]="niks";
cout<<m.count(101)<<endl;
cout<<m.count(120)<<endl;
return 0;
    }