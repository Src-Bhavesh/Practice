#include <iostream>
using namespace std;
int main(){
  string s;
  cin>>s;
  int maxi=0;

  int cnt =0;
  for(int i=0; i<s.length(); i++){
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='0' || s[i]=='u' ){
      cnt++;
      // maxi = max(maxi,cnt);
      if(cnt>maxi){
      maxi=cnt;
    }
  
    }

    
    else{
      cnt=0;
    }

    
  } 
  cout<<maxi;
  return 0;
}