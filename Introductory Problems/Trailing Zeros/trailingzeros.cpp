
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
 
	long long count = 0;
 
	for(long long i=5; num/i >0; i = i*5){
		count = count + num/i;
	}
 
	cout<<count;
}
 
int main(){
 
	solution();
	return 0;
}
