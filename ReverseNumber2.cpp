#include<iostream>
using namespace std;
int main(){
	int n;
	int reverseNumber = 0,reminder;
	cin>>n;
	while(n>0){
		
		reminder =n%10;
		reverseNumber = reverseNumber*10 + reminder;
		n=n/10;
		
	}
	cout<<reverseNumber;
	return 0;
}
