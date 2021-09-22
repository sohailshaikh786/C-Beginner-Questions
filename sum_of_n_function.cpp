#include<iostream>
using namespace std;
int sumN(int num){
	int sum = 0;
	for(int i=0 ;i<=num ;i++){
		sum+=i;
		}
	cout<<sum; 
	return sum;
	}
	
int main(){
	int n;
	cin>>n;
	sumN(n);
	return 0;
}
