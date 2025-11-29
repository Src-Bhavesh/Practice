#include <iostream>
using namespace std;
// int main(){
//   char ch='a';
//   void*ptr=&ch;
//   cout<<ptr<<endl;

//   // they cannot be derefernce as they do not have any type
//   // they can store value of any type 

//   return 0;
// }



void increment (void*pvoid , int size){
  if(size==sizeof(int)){
    int*pontr=(int*)pvoid;
    cout<<pontr<<endl;
  }
  if(size==sizeof(char)){
    char*pontr=(char*)pvoid;
    cout<<pontr<<endl;
  }
}

int main(){

  int x;
  cin>>x;


  increment(x,sizeof(x));

  return 0;
}