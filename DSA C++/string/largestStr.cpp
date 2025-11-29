#include <bits/stdc++.h>
using namespace std;
int main(){

  int n;
  cin>>n;
  string l="";
  for(int i=0; i<n; i++){
    string s;
    cin>>s;
    if(s>l){
      l=s;
    }
  }
  cout<<l;

  return 0;
}