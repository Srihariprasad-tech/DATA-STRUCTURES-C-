#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<" enter the string"<<endl;
    cin>>s;
    int i=0;
    int j=s.size()-1;
    char temp;
    while(i<j)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    cout<<" the reverse string is "<<s<<endl;
    return 0;
}
