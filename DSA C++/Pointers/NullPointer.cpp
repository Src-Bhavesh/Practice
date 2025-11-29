#include <iostream>
using namespace std;
int main(){

  int*p=0;
  int*q=NULL;
  int*r=nullptr;

  cout<<p<<" "<<q<<" "<<r;


  // null pointer cannot be derefernce as they do not have any value
  // therefore we call not get value from address

  return 0;
}