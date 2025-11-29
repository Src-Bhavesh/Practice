#include <iostream>
#include <vector>
using namespace std;
int  main(){

  int n;
  cin>>n;
  vector<int> arr ;
  arr.reserve(n);
  for(int i=0; i<n; i++){
    int x;
    cin>>x;
    arr.push_back(x);

  }
  int m;
  cin>>m;
  vector<int> ar;
  ar.reserve(m);
  for(int i=0; i<m; i++){
    int x;
    cin>>x;
    arr.push_back(x);
  }

  for(int i=0; i<m; i++){
    arr.push_back(ar[i]);
  }

  

  sort(arr.begin() , arr.end());


  for (int x : arr) {
        cout << x << " ";
    }




  return 0;
}