#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
int main(){

  char str [] ="string";
  int s=0; 
  int e=strlen(str)-1;
  while(s<e){
    swap(str[s],str[e]);
    s++;
    e--;
  }
  cout<<str<<endl;

  char str2[] = "Whatttt";

  cout<<reverse(str2, str2 + strlen(str2))<<endl;


  return 0;

}