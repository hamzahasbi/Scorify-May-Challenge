/*
	Author: Hamza Hasbi
	Date: 28-May-16 5:43:32 PM
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
bool compare(pair<string,int>a,pair<string,int>b)
{
    if(a.first.size()<b.first.size()) return true;
    else if(a.first.size()==b.first.size() && a.first<b.first) return true;
    else if(a.first.size()==b.first.size() && a.first==b.first && a.second<b.second) return true;
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
        vector<pair<string,int>>p(n);
        for(int i=0;i<n;i++) 
        {
            cin>>p[i].first;
            p[i].second=i+1;
        }
        sort(p.begin(),p.end(),compare);
        for(int i=0;i<n-1;i++)
        cout<<p[i].second<<" ";
        cout<<p[n-1].second<<endl;
    }
    return 0;
}

