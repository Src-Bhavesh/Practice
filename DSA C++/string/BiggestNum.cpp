#include <bits/stdc++.h>
using namespace std;
bool comp(const string& a, const string& b) {
    string ab = a + b; 
    string ba = b + a; 
    return ab > ba; 
}



int main(){


  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
     vector<string> arr(n);
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
    sort(arr.begin(),arr.end(), comp);

    for(int i=0; i<n; i++){
      cout<<arr[i];
    }

  }



  return 0;
}