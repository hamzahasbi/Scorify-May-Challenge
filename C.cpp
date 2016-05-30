/*
	Author: Hamza Hasbi
	Date: 27-May-16 9:01:48 PM
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int p[14];
void etape1(int p[14]);
void etape2(int p[14]);
bool etape3(int p[14]);
void etape4(int p[14]);
void etape5(int p[14]);
void etape6(int p[14]); 
void etape7(int p[14]); 

void etape1 (int p[14])
{
	p[4]=p[3]+p[p[8]];
	etape2(p);
}
void etape2 (int p[14])
{
	p[7]=p[7]*p[7];
	etape3(p);
}

void etape4(int p[14])
{
	p[4]=p[4]+p[1];
	etape5(p);

}
void etape5(int p[14])
{
		p[7]=p[7]-p[2];
		etape2(p);
}
void etape6(int p[14])
{
	p[10]=p[3]+p[9];
	etape7(p);
}
bool etape3 (int p[14])
{

	if(p[4]==p[9]) etape6(p);
    else etape4(p) ;
}
void etape7(int p[14])
{
	p[12]=p[7]-p[10];
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
		for(int i=1;i<=12;i++)
		{
			cin>>p[i];
		}
		
	   
		solve();
		cout<<p[12]<<endl;
	}

  return 0;
}
