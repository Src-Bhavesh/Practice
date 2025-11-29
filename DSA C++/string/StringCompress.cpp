#include <bits/stdc++.h>
using namespace std;
int main(){

  string s;
  cin>>s;
  map<char,int>mp;
  for (auto c : s) { 
    mp[c]++;
  }

  for(auto x : mp){
    if(x.second==1){
      cout<<x.first;
    }
    else{
    cout<<x.first<<x.second;
    }
  }



  return 0;
}