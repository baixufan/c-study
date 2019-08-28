#include<iostream>
using namespace std;
int main()
{
	enum body{a,b,c,d}month[31],j;
	int i;
	j=a;
	
	for(i=1;i<=30;i++){
		month[i]=j;
		cout<<'\t'<<month[i];
		j=j+b;
		if(j>d)j=a;
	}
	cout<<endl;
	for(i=1;i<=30;i++){
		switch(month[i])
		{
		case a:cout<<'\t'<<month[i];break;
		case b:cout<<'\t'<<month[i];break;
		case c:cout<<'\t'<<month[i];break;
		case d:cout<<'\t'<<month[i];break;	
		}
	}
	cout<<endl;
	return 0;
 } 
