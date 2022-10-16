#include <iostream>
using namespace std;

int main() {
	int t; cin>>t; while(t--)
	{
	    int n; cin>>n;
	    int a[n],i; for(i=0;i<n;i++) cin>>a[i];
	    for(i=0;i<n-1;i++)
	     {
	         if(a[i+1]<a[i]) cout<<a[i+1]<<" ";
	         else cout<<-1<<" ";
	     }
	     cout<<-1<<endl;
	}
	return 0;
}