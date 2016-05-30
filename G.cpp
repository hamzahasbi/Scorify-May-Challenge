/*
	Author: Hamza Hasbi
	Date: 28-May-16 6:30:09 PM
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
		int n;
		string x;
		cin>>n;
		list<string> p;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			p.push_back(x);
			
		}
		int m;
		cin>>m;
		list<string>::iterator it;
		it=p.begin();
		int a;
		string y;
		for(int i=0;i<m;i++)
		{
			cin>>y;
			if(y=="INSERT")	
			{
				cin>>a>>x;
				it=p.begin();
				if (a>=p.size()) p.push_back(x);
				else 
				{
				    for(int j=1;j<=a;j++) it++;
				    p.insert(it,x);
				}
			}
			else if(y=="REMOVE")
			{
			    it=p.begin();
				cin>>a;
				if (a<p.size())
				{
				    for(int j=1;j<=a;j++) it++;
				    p.erase(it);
				}
			}
		}
		if(!p.empty())
		{
		for(it=p.begin();it!=p.end();it++)
		cout<<*it<<endl;
		it--;
		for(int i=0;i<(*it).size();i++)
		cout<<"-";
		cout<<endl;
		}
		
		
	}

  return 0;
}
