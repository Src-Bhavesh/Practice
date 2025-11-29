#include <iostream>
using namespace std;
void swapfn(int a , int b){
  a=a^b;
  b=b^a;
  a=a^b;
  

  cout<<a<<" "<<b;
  
}
int main(){
  

  int a;
  cin>>a;
  int b;
  cin>>b;

  swapfn(a,b);

  return 0;
}