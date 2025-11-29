#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char i=1;
    char b='A';
    while (i<=n)
    {
         int j=1;
        while (j<=i) {
           cout<<b;
           b++;
           j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}