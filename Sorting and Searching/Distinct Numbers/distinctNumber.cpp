
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
 
using namespace std;
 
void solution(){
	long long n;
	cin>>n;
	set <int> theset;
 
	for(int i=0; i<n; i++){
		long long ele;
		cin>>ele;
		theset.insert(ele);
	}
 
	cout<<theset.size();
}
 
int main(){
 
	solution();
	return 0;
}
