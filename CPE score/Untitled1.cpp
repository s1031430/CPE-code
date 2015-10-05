#include<iostream>   //https://uva.onlinejudge.org/external/15/1585.html
#include<cstring>
using namespace std;
int score(string);
int main()
{
	string str;
	cout<<"";
	cin>>str;
	cout<<score(str);
	return 0;
}
int score(string str)
{
	int a=0,sum=0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='o')
		{
			a++;
			sum=sum+a;
		}
		if(str[i]=='x')
		{
			a=0;
			sum=sum+a;
		}	
	}
	return sum;
}
