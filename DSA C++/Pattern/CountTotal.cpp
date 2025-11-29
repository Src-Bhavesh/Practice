#include <iostream>
using namespace std;
int main(){
    char ch;
    ch=cin.get();
    int i=0;
    int j=0;
    int n=0;
    int s=0;
    while(ch!='*'){
        
        if(ch>='A' and ch<='Z' or ch>='a' and ch<='z'){
            i++;
        }
        
        else if (ch>='0' and ch<='9'){
            j++;
        }

        else if(ch==' ' or ch=='\n' or ch=='\t'){
            n++;
        }

        else{
            s++;
        }

    ch=cin.get();     
    }
 cout<<i<<" is no. of alphabet"<<endl;
 cout<<j<<" is no. of digits"<<endl;
 cout<<s<<" is no. of special Character"<<endl;
 cout<<n<<" is other spaces"<<endl;
 return 0;

}