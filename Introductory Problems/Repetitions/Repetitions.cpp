
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main(){
 
	string dna;
	cin>>dna;
 
	vector <int> times;
	int count = 1;
 
	for(int i=0; i<dna.length(); i++){
 
		if(dna[i] == dna[i+1]){
			count ++;
		}
		else{
			times.push_back(count);
			count = 1;
		}
	}
 
	sort(times.begin(), times.end());
	int len = times.size();
	cout<<times[len-1]<<"\n";
 
	return 0;
}
