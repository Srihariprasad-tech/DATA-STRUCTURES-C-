#include<iostream>
#include<string>
#include<vector>
using namespace std;
string removeduplicaterec(const string &s,int i,string &result,vector<bool>&seen)
{
	if(i==(int)s.size())
	{
	return result;
	unsigned char ch=s[i];
	if(!seen[ch])
	{
		seen[ch]=true;
		result.push_back(s[i]);
	}
	return removeduplicaterec(s,i+1,result,seen);
}	
string removeduplicates(const string &s)
{
	vector<bool>seen(256,false);
	string result;
	return removeduplicaterec(s,0,result,seen);
}
}


int main()
{
	string str;
	cout<<"enter the string"<<endl;
	cin>>str;
	cout<<"after removing the duplicate"<<removeduplicaterec(str)<<endl;
	return 0;
}
