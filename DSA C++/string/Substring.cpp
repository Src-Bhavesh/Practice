#include <iostream>
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
  return 0;
}