#include <bits/stdc++.h>
using namespace std;
int main(){

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
     vector<string> arr(n);
    for(int i=0; i<n; i++){
      int n;
      cin>>n;
      arr[i]=to_string(n);
    }
    sort(arr.rbegin(),arr.rend());

    for(int i=0; i<n; i++){
      cout<<arr[i];
    }

  }



  return 0;
}