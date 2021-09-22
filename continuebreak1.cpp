#include<iostream>
using namespace std;
int main(){
	
	
	int money =3000;
	for(int days=0;days<30;days++){
		if(money==0){
			break;
		}
		money= money -500;
		cout<<days<<"Money left"<<money<<endl;
	
		
	}
	
	
	
	
	return 0;
}
