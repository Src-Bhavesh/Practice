#include <iostream>
using namespace std;
// int inc(int n, int i=1){
//   if(i>n){
//     return 0;
//   }
//     cout<<i<<" ";
//     inc(n,i+1);
  
// }

void inc(int n){
  if(n==0){
    return ;
  }
  
  inc(n-1);
  cout<<n<<" ";
}



int main(){
  inc(5);

  return 0;
}