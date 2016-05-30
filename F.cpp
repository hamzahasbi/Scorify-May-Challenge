/*
	Author: Hamza Hasbi
	Date: 28-May-16 5:22:57 PM
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
bool compare(pair<int,string>a,pair<int,string>b)
{
	if(a.first<b.first) return true;
	else if (a.first==b.first && a.second<b.second) return true;
	else return false;
}
main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cin.ignore();
		vector<string>p(n);
		string tmp;
		vector<pair<int,string>> ans;
		for(int i=0;i<n;i++) getline(cin,p[i]);
		for(int i=0;i<n;i++)
		{
			tmp="";
			vector<string> x;
			for(int j=0;j<p[i].size();j++)
			{
				tmp="";	
				while(p[i][j]!='-' && j<p[i].size())
				{
					tmp+=p[i][j];j++;
				}
				x.push_back(tmp);	
			}
			ans.push_back(make_pair(atoi(x[1].c_str()),x[2]));
		}
		sort(ans.begin(),ans.end(),compare);
		for(int i=0;i<n-1;i++)
		{
			cout<<ans[i].second<<".";
		}
		cout<<ans[n-1].second<<endl;
	}
	
  return 0;
}

