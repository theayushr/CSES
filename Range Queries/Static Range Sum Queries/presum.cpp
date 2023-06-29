
#include <iostream>
#include <vector>
using namespace std;
 
 
void solve(){
 
	int n,q;
	cin>>n>>q;
 
	vector<long long int>nums(n);
	for(int i=0; i<n; i++){
		cin>>nums[i];
	}
 
	vector<long long int>presum(n+1,0);
	presum[1] = nums[0];
	for(int i=2; i<=n; i++){
		presum[i] = nums[i-1] + presum[i-1];
	}
 
	for(int i=1; i<=q; i++){
		int f,s;
		cin>>f>>s;
 
		cout<<presum[s]-presum[f-1]<<endl;
	}
 
}
 
int main(){
	solve();
	return 0;
}
