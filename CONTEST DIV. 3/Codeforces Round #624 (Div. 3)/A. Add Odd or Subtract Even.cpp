# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int t=abs(a-b);
		if(t==0) cout<<"0\n";
		else if(a>b && t%2==0) cout<<"1\n";
		else if(a>b && t%2==1) cout<<"2\n";
		else if(a<b && t%2==1) cout<<"1\n";
		else if(a<b && t%2==0) cout<<"2\n";
	}
	return 0;
}
