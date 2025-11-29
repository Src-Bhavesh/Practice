#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for (int i=0; i<n; i++){
		int j;
		cin>>j;
		arr[i]=j;
	}

	for(int i=0; i<n/2; i++){
		for(int j=n; j>n/2; j--){
			swap(arr[i],arr[j]);
		}
	}

	for(int i=0; i<n; i++){
		cout<<arr[i];
	}
	return 0;
}