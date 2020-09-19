#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	string s;
	cin>>s;
	int i=0;
	while(i<s.length())
	{
		cout<<s[i];
		i++;
		while(i<s.length()&&s[i]>='a'&&s[i]<='z')
		{
			cout<<s[i];
			i++;
		}
		cout<<endl;
	}
	return 0;
}
