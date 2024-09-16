#include <bits/stdc++.h>
using namespace std;

int  BinarySearch(int l,int r,int arr[],int x){
    while(l <= r)
    {
        int mid=(l+r)/2;
        if(arr[mid] == x)
        return mid+1;
        else if(arr[mid] < x)
        l=mid+1;
        else
        r=mid-1;
    }
    return 0;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int k;
	    cin>>k;
	    int key=a[k-1];
	    sort(a,a+n);
	    int r=BinarySearch(0,n-1,a,key);
	    cout<<r<<endl;
	
}
	return 0;
}
