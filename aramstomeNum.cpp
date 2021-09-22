#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	int ogn=n; 
	while(n>0){
		int ld=n%10;
		sum=sum+pow(ld,3);
		n=n/10;
	}
	if(sum==ogn){
		cout<<"Aramstome Number!";
		
	}else{
		cout<<"Not aramstrome Number";
	}
	return 0;
	
}
