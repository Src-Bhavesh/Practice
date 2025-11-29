#include <iostream>
using namespace std;
bool Checkprime(int a){
  int i = 1;
  while(i<a){
    if(a%i==0){
      break;  
    }
    i++;
  }

  if(i==a){
    return false;
  }
  else{
    return true;
  }
  
}


int main(){
  int a;
  cin>>a;
  if(Checkprime(a)){
    cout<<a<<" "<<"is Prime";
  }
  else{
    cout<<a<<" "<<"is not Prime";
  }
  return 0;
}