#include<bits/stdc++.h>
typedef long long ll; 
using namespace std; 

int main() 
{ 
	int n;
	cin>>n;
	vl hist(n);
	f0(i,n)
	cin>>hist[i];
	stack<int> s; 
	ll maxa = 0,t,at,i=0;
	while (i < n) 
	{ 
		if (s.empty() || hist[s.top()] <= hist[i]) 
			s.push(i++); 
		else
		{ 
			t = s.top();
			s.pop();
			at = hist[t] * (s.empty()?i:i-s.top()-1); 
			if (maxa < at) 
				maxa = at; 
		} 
	} 
	while (s.empty() == false) 
	{ 
		t = s.top(); 
		s.pop(); 
		at = hist[t]*(s.empty()?i:i-s.top()-1); 
		if (maxa < at) 
			maxa = at; 
	} 
} 
