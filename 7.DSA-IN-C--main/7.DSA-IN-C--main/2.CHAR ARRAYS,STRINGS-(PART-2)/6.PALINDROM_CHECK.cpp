#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<" enter the string"<<endl;
    cin>>str;
    int i=0;
    int j=str.size()-1;
    bool ispalindrom=true;
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            ispalindrom=false;
            break;
        }
        i++;
        j--;
    }
    if(ispalindrom)
    {
        cout<<" the string is a palindrom"<<endl;
    }
    else{
        cout<<" the string is not a palindrom"<<endl;
    }
    return 0;
}