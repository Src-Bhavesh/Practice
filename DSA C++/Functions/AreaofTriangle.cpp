#include <iostream>
#include <cmath>
using namespace std;
int AreaofTriangle(int a , int b){
  float area1 = (a*b)/2.0;
  return area1;
}

int AreaofTriangle( int a , int b, int c){
  float s= (a+b+c)/2.0;
  float area1=sqrt(s*(s-a)*(s-b)*(s-c));
  return area1;
}

int main(){
  int a;
  cin>>a;
  int b; 
  cin>>b;
  int c;
  cin>>c;

  cout<<AreaofTriangle(a,b,c)<<endl;
  cout<<AreaofTriangle(a,b);
  

  
  return 0;
}
