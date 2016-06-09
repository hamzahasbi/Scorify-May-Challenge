/*
	Author: Hamza Hasbi
	Date: 28-May-16 5:43:31 PM
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int m,n,a;
		int ans=0;
		cin>>m>>n;
		float x=(float) m/2;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a>=x) ans++;
		}
		
		cout<<ans<<endl;		
	}

  return 0;
}

