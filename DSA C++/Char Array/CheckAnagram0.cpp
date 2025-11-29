#include <iostream>
using namespace std;
bool check(char*str1 , char*str2){
  sort(str1,str1+strlen(str1));
  sort(str2,str2+strlen(str2));

  if(strcmp(str1, str2) == 0){
    return true;
  }
  else{
    return false;
  }
}


int main(){

  char str1[]="taste";
  char str2[]="state";
  if(check(str1,str2)){
    cout<<"True";
  }
  else{
    cout<<"false";
  }
  


  return 0;
}