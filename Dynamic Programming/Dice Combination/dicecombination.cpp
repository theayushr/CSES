#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

int memoization(long long n, vector<long long>&dp){

	//base case when the sum reduced to 0
	if(n==0){
		return 1;
	}

	if(dp[n]!=-1) return dp[n];

	long long ways = 0;
	for(int i=1; i<=6 and (n-i)>=0; i++){
		ways += memoization(n-i, dp);
		ways %= MOD;
	}


	return dp[n] = ways;

}

void rec(long long n, long long int sum, long long int &ways){

	if(sum==n){
		ways++;

		ways %= MOD;
		return;
	}

	if(sum>n){
		return ;
	}

	for(int i=1; i<=6; i++){
		rec(n,sum+i, ways);
		ways %= MOD;
	}

	return;
}

void solve(){
	long long n;
	cin>>n;

	//long long int ways = 0;
	//long long int sum = 0;
	//rec(n, sum, ways);

	vector<long long> dp(n+1, -1);

	//state dp[i] represents the maximum number of ways to get that sum

	long long ways  = memoization(n,dp);

	cout<<ways;
	return ;
}

int main(){

	solve();

	return 0;
}
