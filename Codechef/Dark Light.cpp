#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N,K;
	    cin>>N>>K;
	    if(K==0){
	        if(N%4==1 || N%4==2 || N%4==3){
	            cout<<"On"<<endl;
	        }
	        else
	        cout<<"Off"<<endl;
	    }
	    else if(K==1)
	    {
	        if(N%4==0)
	        cout<<"On"<<endl;
	        else
	        cout<<"Ambiguous"<<endl;
	    }
	}
	return 0;
}
