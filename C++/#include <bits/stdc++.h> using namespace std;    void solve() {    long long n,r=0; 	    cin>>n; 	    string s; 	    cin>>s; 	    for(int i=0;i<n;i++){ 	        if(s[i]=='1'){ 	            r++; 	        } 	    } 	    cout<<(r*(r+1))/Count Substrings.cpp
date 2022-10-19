#include <bits/stdc++.h>
using namespace std;

void solve()
{
   long long n,r=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1'){
	            r++;
	        }
	    }
	    cout<<(r*(r+1))/2<<endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
