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
for(auto it:m)
{
    cout<<"key is"<<it.first<<" ,"<<" value is ="<<it.second<<endl;
}
return 0;
    }