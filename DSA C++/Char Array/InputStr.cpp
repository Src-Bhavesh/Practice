#include <iostream>
using namespace std;


void singlestring(string str , char delm = '\n'){
   int n = str.length();
    for(int i=0; i<n; i++){
      if(str[i]==delm){
        cout<<endl;
      }
      else{
        cout<<str[i];
      }
    }   
}


int main() {
    
    string str = "bhavesh pandey  $ jbhkjhb$jvj "; 
    singlestring(str,'$');   
   
    return 0;
}