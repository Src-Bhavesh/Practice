#include <iostream>
using namespace std;
int main(){

  int x=5 ;
  int*xptr = &x;
  cout<<x<<endl<<xptr<<endl;
  cout<<"size "<<sizeof(xptr)<<endl;
  cout<<*xptr<<endl; // to get value from address we use * operator
 
  cout<<endl;

  double z= 33.33;
  double*zptr = &z;
  cout<<z<<endl<<zptr<<endl;
  cout<<"size "<<sizeof(zptr)<<endl;
  cout<<endl;

  char w = 'W';
  int*wptr=(int*)&w;
  cout<<w<<endl<<wptr<<endl;
  cout<<"size "<<sizeof(wptr)<<endl;
  cout<<*xptr<<endl;
  cout<<endl;

  int b=10;
  char*bptr = (char*)&b;
  cout<<b<<endl<<bptr<<endl;
  cout<<"size "<<sizeof(bptr)<<endl;
  cout<<endl;
  

  int a=516;
  char*aptr = (char*)&a;
  cout<<a<<" -->> "<<(int)*aptr<<endl;
 
  



  return 0;
}