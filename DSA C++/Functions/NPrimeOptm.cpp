#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  cout<<"2"<<" ";
  int m=3;
  for(int i=2; i<=n; i++){

    

    bool isprime=true;
    if(m%i==0){
      isprime=false;
      break;
    }

    if(isprime){
      cout<<m<<" ";
    }
    m=m+2;

    
  }



  return 0;
}