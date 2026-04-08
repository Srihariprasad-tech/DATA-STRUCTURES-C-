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
cout<<m[101]<<endl;
m[101]="banu";
cout<<m[101]<<endl;
return 0;
    }
