#include <iostream>
using namespace std;
int main(){
  char str []="BHavesh Pandey";
  int count =0;
  while(str[count]!='\0'){ 
    count++; 
  }
  cout<<count++;

  int l = strlen(str);
  return 0;
}