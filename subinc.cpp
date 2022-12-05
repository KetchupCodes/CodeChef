#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
	int n;
	ll ans;
	ans=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int l=0;
	int r =1;
	while(r<n)
	{
		if(arr[r]>=arr[r-1]){
			r++;
		}
		else{
			ll ni= r-l;
			ans+=(ni)*(ni+1)/2;
			l=r;
			r++;
		}
	}
	ans+=(r-l)*(r-l+1)/2;
	cout<<ans<<"\n";

	
	
	
	
	
	
	
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    while(n--)
    {
    	solve();	
    }
   	
   	
	
    return 0;

}
