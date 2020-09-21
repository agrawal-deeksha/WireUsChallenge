#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	string ans;
	ans.push_back(s[0]);
	for(int i=1;i<s.length();i++)
	{
		int diff = s[i]-ans.back();
		ans+= to_string(diff);
		ans.push_back(s[i]);
	}
	cout<<ans<<endl;
}
