/*
	Author: Hamza Hasbi
	Date: 28-May-16 5:47:46 PM
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int p[20];
int c;
void etape1(int p[20]);
void etape2(int p[20],int c);
void etape3(int p[20]);
void etape4(int p[20]);
void etape5(int p[20]);
void etape6(int p[20]); 

void etape1 (int p[20])
{
	p[12]=p[7]-p[p[6]];
	
	etape2(p,c);
}

void etape2 (int p[20],int c)
{
	p[12]=p[12]+p[c];	
	etape3(p);
}

void etape3 (int p[20])
{

	if(p[12]%5==0) 	etape2(p,c);
    else etape4(p) ;
}

void etape4(int p[20])
{
	c-=p[11];
	etape5(p);

}

void etape5(int p[20])
{
	
		if(p[2]<=c) etape6(p);
		else return ;
}

void etape6(int p[20])
{

	p[9]--;
	etape2(p,c);
}

void solve()
{
     etape1(p);
}
main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		memset(p,0,sizeof(p));
		for(int i=1;i<=13;i++)
		{
			cin>>p[i];
		}
		c=13;
		solve();
		cout<<p[12]<<endl;
	}

  return 0;
}

