#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	string s;
	cin>>s;
	char last = s[0];
	for(int i=1;i<s.length();i++)
	{
		if(last==s[i])
			s[i]='*';
		else
			last=s[i];
	}
	cout<<s<<endl;
}
