
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
 
typedef long long ll;
 
ll rec(ll n, vector<ll>&coins, vector<ll>&dp){
 
	//state: dp[i] represents the minimum of coins needed to make i
	if(n==0) return 0;
	if(n<0) return 0;
 
	if(dp[n]!=-1) return dp[n];
 
	ll mincoins = INT_MAX;
	for(int i=0; i<coins.size(); i++){
 
		long long temp = INT_MAX;
		if((n-coins[i])>=0){
			temp = 1 + rec((n-coins[i]), coins, dp);
			mincoins = min(mincoins, temp);
		}
		
	}
	return dp[n] = mincoins;
}
 
int main(){
 
 
	ll n, target;
	cin>>n>>target;
 
	vector<ll>coins(n);
	for(ll i=0; i<n; i++){
		cin>>coins[i];
	}
 
	vector<ll>dp(target+1, -1);
	ll ans = rec(target,coins,dp);
 
	if(ans !=INT_MAX and ans>0) {
		cout<<ans;
	}
	else{
		cout<<-1;
	}
 
	return 0;
}
