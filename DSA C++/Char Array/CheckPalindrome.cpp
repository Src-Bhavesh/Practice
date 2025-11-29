#include <iostream>
using namespace std;
bool checkpalimdrome(char*str){
  int s=0; 
  int e=strlen(str)-1;
  while(s<e){
    if(str[s]!=str[e]){
    return false;
    }
    s++;
    e--;
  }

return true;
}

int main(){

  char str[] = "bhavesh";
if(checkpalimdrome(str)){
  cout<<"True";
}
else{
  cout<<"False";
}
}