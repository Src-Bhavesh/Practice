#include <iostream>
#include <string>
using namespace std;
int main(){
  
  string gstr = "";

  int n;
  cin>>n;

  for(int i=0; i<n; i++){
     string str;
    cin>>str;
    if(str > gstr){
      gstr=str;
    }
  }
  cout<<gstr;
  
return 0;

}