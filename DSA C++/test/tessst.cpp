#include <iostream>
using namespace std;
int main(){
  int n = 10;
  int m= 15;
  int arr[25];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  int ar[m];
  for(int i=0; i<m; i++){
    cin>>ar[i];
  }

  int i = n-1; 
  int j = m-1; 
  int k = n+m-1; 

  while (i >= 0 && j >= 0) {
        
        if (arr[i] > ar[j]) {
            arr[k] = arr[i]; 
        } else {
            arr[k] = ar[j]; 
            j--; 
        }
        k--; 
    }

    while (i >= 0) {
        arr[k] = arr[i];
        i--;
        k--;
    }
    int min =INT_MAX;

     while (j >= 0) {
        arr[k] = ar[j];
        j--;
        k--;
    }

    for(int i=0; i<m+n; i++){
      cout<<arr[i]<<" ";
    }

return 0;

}

