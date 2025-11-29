#include <iostream>
using namespace std;
int main(){

  // int x=10;
  // int*xptr=&x;
  // cout<<xptr<<endl;
  // // adding 1 to a pointer address will move to next address 
  // // ex:- 100++ means it will become 100+sizeof(datatype)
  // // ex;- for int datatype[size is 4] 100++ will become 104 means next address to the integer if available 
  // xptr++;
  // cout<<xptr;



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



  int arr[]={10,20,30,40,50,60,70};
  // cout<<arr<<endl;
  int n=sizeof(arr)/sizeof(int);
  // cout<<&arr[0]<<" "<<arr<<" "<<arr[0]<<" "<<*arr<<endl;
  // cout<<&arr[1]<<" "<<arr+1<<" "<<arr[1]<<" "<<*(arr+1)<<endl;
  // cout<<&arr[2]<<" "<<arr+2<<" "<<arr[2]<<" "<<*(arr+2)<<endl;

  for(int i=0; i<n; i++){
    cout<<&arr[i]<<" - "<<arr+i<<" ----> "<<arr[i]<<" - "<<*(arr+i)<<endl;
  }
 


  // this is incorrect 
  // int*aptr=&arr;
  // aptr++;
  // cout<<*aptr;


  return 0;
}