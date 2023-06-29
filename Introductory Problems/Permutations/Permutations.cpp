
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
void solution(){
 
	long long num;
	cin>>num;
 
	if(num >3 || num == 1){
		for(int i=2; i<=num; i= i+2){
			cout<<i<<" ";
		}
		for(int i=1; i<=num; i = i+2){
			cout<<i<<" ";
		}
	}
	else{
		cout<<"NO SOLUTION";
	}
}
 
int main(){
 
	solution();
	return 0;
}
