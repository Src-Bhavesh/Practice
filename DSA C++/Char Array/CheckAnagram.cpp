#include <iostream>
using namespace std;

bool checkanagram(char*str1 , char*str2){
  int count[26]={0};
  if(strlen(str1)!=strlen(str2)){
    return false;
  }
  for(int i=0; i<strlen(str1); i++){
    count[str1[i]-'a']++;
  }

  for(int i=0; i<strlen(str2); i++){
    count[str2[i]-'a']--;
    if(count[str2[i]-'a']<0 ){
      return false;
    }
  }
  return true;
}


int main(){

  char str1[] = "state";
  char str2[] = "taste";

  if(checkanagram(str1 , str2)){
  cout<<"True";
}
else{
  cout<<"False";
}


  return 0;
}