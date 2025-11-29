#include <iostream>
using namespace std;
int Nprime(int n){
cout<<2<<" ";
  int i=3;
  while(i<=n){
    int j=2;
    while(j<i){
      if(i%j==0){
        break;
      }
      j++;
    }
    if(j==i){
      cout<<j<<" ";
    }
    i=i+2;
  }
   
  return 0;
}


int main(){
  int n;
  cin>>n;
  Nprime(n);
}