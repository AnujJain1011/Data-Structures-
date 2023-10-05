#include <iostream>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int D;
	    cin>>D;
	    string N;
	    cin>>N;
	    int count=0;
	    for(int i=0;i<D;i++)
	    {
	        if(N.at(i)=='0'||N.at(i)=='5')
	        count++;
	    }
	    if(count>0)
	    {
	     cout<<"Yes"<<endl;
	    }
	    else
	    {
	    cout<<"No"<<endl;
	    }
	}
	return 0;
}
