#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n,m;
	cin>>n>>m;
	vector<vector<ll>> v(n,vector<ll>(m));
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>v[i][j];
	for(int j=0;j<m;j++)
	{
		if(j%2==0)
		{
			for(int i=0;i<n;i++)
				cout<<v[i][j]<<",";
		}
		else
		{
			for(int i=n-1;i>=0;i--)
				cout<<v[i][j]<<",";
		}
	}
	cout<<"END"<<endl;
}
