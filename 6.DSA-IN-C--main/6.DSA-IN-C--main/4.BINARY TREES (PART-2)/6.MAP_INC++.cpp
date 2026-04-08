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
   cout<<"double value is "<<it.first*2<<endl;
}
return 0;
    }