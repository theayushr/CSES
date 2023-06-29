
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
void solution(){
 
	long long num, sum =0;
	cin>>num;
 
	for(int i=1; i<=num; i++){
		sum = sum + i;
	}
 
	vector <long long> ele1;
	vector <long long> ele2;
 
	if(sum%2==0){
 
		cout<<"YES\n";
		long long elesum = 0;
		
		for(long long i = num; i>0; i--){
 
			if(elesum + i > sum/2){
				if((sum/2) - elesum != 0)
					ele1.push_back((sum/2) - elesum);
				
				ele2.push_back((sum/2) - elesum);
				ele2.push_back(i);
				break;
			}
			else{
				ele1.push_back(i);
				elesum = elesum + i;
			}
		}
 
		long long first = ele2[0];
		long long second = ele2[1];
 
		ele2.clear();
 
		for(int i= second; i>0; i--){
			if(i != first){
				ele2.push_back(i);
			}
		}
		cout<<ele1.size()<<endl;
 
		for(int i=0; i<ele1.size(); i++){
			cout<<ele1[i]<<" ";
		}
 
		cout<<endl<<ele2.size()<<endl;
 
		for(int i=0; i<ele2.size(); i++){
			cout<<ele2[i]<<" ";
		}
	}
	else{
		cout<<"NO";
	}
}
 
int main(){
 
	solution();
	return 0;
}
