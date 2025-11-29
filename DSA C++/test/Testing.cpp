#include <iostream>
using namespace std;
int main(){
  int n = 10;
  int m= 15;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  int ar[m];
  for(int i=0; i<m; i++){
    cin>>ar[i];
  }

  int i = 0; 
  int j = 0; 
  int k = 0; 
  int arm[25];

  
    while (i < n && j < m) {
        if (arr[i] >ar[j]) {
            arm[k] = ar[j];
            j++;
        } 
        else{
            arm[k] = arr[i];
            i++;
        }
        k++;
    }

   
    while (i < n) {
        arm[k] = arr[i];
        i++;
        k++;
    }

    
    while (j < m) {
        arm[k] = ar[j];
        j++;
        k++;
    }

    





  for(int i=0; i<m+n; i++){
    cout<<arr[i]<<" ";
  }



}