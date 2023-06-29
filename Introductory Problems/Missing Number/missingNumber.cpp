
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main(){
 
	long long num;
	cin>>num;
 
	vector <int> arr(num-1);
 
	for(int i=0; i<num-1; i++){
		cin>>arr[i];
	}
 
	sort(arr.begin(), arr.end());
 
	for(int i=0; i<=num -1; i++){
		if(arr[i] == i+1){
			continue;
		}
		else{
			cout<<i+1<<endl;
			break;
		}
	}
	return 0;
}
