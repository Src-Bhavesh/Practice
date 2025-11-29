#include <bits/stdc++.h>
using namespace std;
int main(){

  string s ;
  cin>>s;
  vector<string>ss;


  for(int i=0; i<s.length(); i++){
    for(int j=i; j<s.length(); j++){
      ss.push_back(s.substr(i,j-i+1));
    }
  }
  int c=0;
  for(int i=0; i<ss.size(); i++){
    int s=0; 
    string ch = ss[i];
    int e= (ss[i].length())-1;
    while(s<e){
      swap(ss[i][s],ss[i][e]);
      s++;
      e--; 
    }
    if(ch==ss[i]){
      c++;
    }

  }
  cout<<c;


  return 0;
}