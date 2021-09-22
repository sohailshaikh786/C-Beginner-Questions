#include<iostream>
#include<climits>
using namespace std;
int main(){
	cout<<"Enter size of array:";
	int n;
	cin>>n;
	int arr[n];
	int maxNo = INT_MIN;
	int minNo = INT_MAX;
	cout<<"Enter element of arrays:";
	for(int i=0 ; i<n ;i++){
		
		cin>>arr[i];
	}
	cout<<"Your array :";
	for(int i=0 ;i<n ;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	for(int i=0;i<n;i++){
		maxNo =max(maxNo,arr[i]);
		minNo =min(minNo,arr[i]);
	}
	cout<<"Minimum No : "<<minNo<<endl;
	cout<<"Maximum No : "<<maxNo<<endl;
	return 0;
}
