#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
 {
	string name;
	cin>>name;
	int len=name.size();
	int temp1,temp2;
	if(len & 1)
	{
		temp1=(len/2)-1;
		temp2=(len/2)+1;
	}
	if(len % 2 ==0)
	{
		temp1=(len/2)-1;
		temp2=len/2;
	}
	string str1=name.substr(0,temp1+1);
	string str2=name.substr(temp2,len-temp2);
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	if(str1==str2)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	//cout<<str1<<" "<<str2;
	
 }
 return 0;
}