#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
	int n,q;
	cin>>n>>q;
	vector<vector<int>> v(32,vector<int>(n,0));
	vector<int> nums(n);
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
	}
	for(int i =0;i<n;i++)
	{
		for(int j=0;j<32;j++)
		{
			if(nums[i]&(1<<j))
			{
				v[j][i]++;
			}
			if(i>0)
			{
				v[j][i]+=v[j][i-1];
			}
		}
	}
	

	
	while(q--){
int tot_ones;
	int l,r;
	cin>>l>>r;
	l--;
	r--;
	long long ans =0;

	for(int i=0;i<31;i++)
	{
		tot_ones=0;
		if(l>=1)
		{
			tot_ones = v[i][r] - v[i][l-1];
		}
		else{
			tot_ones = v[i][r];
		}
		int total_zeroes = r-l+1-tot_ones;
		if(tot_ones<total_zeroes)
		{
			ans +=pow(2,i);
		}
	

	}
	cout<<ans<<"\n";


	}	
	
	
	
	
	
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   	solve();	
   	
	
    return 0;

}
