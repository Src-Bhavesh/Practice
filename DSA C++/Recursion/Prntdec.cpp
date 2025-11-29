#include <iostream>
using namespace std;

int dec(int n){
  if(n==0){
    return 0;
  }
  
    cout<<n<<" ";
    dec(n-1);
  
}

int main(){
  dec(5);
}