#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	// int m;
	// m=n+1;
	int i=0;
	while(i<=n){
		int j=1;
		int l=1;
		while(j<=i-1){
			cout<<" ";
			j++;
		}
		while(l<=n-i){
			cout<<"* ";
			l++;

		}
		i++;
		cout<<endl;
	}
	return 0;
}