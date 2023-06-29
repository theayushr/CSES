
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
 
using namespace std;
const unsigned int M = 1000000007;
 
void solution(){
	long long num;
	cin>>num;
 
	long long multi =1;
 
	for(long long i=1; i<=num; i++){
		multi = (2 * multi) % M;
	}
	
	cout<<multi;
 
}
 
int main(){
 
	solution();
	return 0;
}
