#include <iostream>
using namespace std;
int fibonacci(int n, int i=1, int j=0){
  if(i>n){
    return 0;
  }
  cout<<j;
  int c = i+j;
  j=i;
  i=c;
  fibonacci(i,j);
}

int main(){
  fibonacci(30);
  return 0;
}