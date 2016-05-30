/*
	Author: Hamza Hasbi
	Date: 28-May-16 5:41:14 PM
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int n;
		string name;
		int code;
		cin>>n;
		string nom[100];
		int cod[100];
		int rep[100];
		for(int i=0;i<n;i++){
			cin>>name>>code;
			nom[i]=name;
			cod[i]=code;
			rep[i]=0;
		}
		int m;
		cin>>m;
		long pref;
		for(int i=0;i<m;i++){
			cin>>pref;
			pref/=1000;
			for(int j=0;j<n;j++){
				if(pref==cod[j]){
					rep[j]++;
					break;
				}
			}
		}
		
		for(int i=0;i<n;i++){
			cout<<"|"<<nom[i]<<":"<<rep[i];
		}
		cout<<endl;
	}
	return 0;
}


