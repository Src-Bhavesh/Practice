#include <iostream>
using namespace std;
int main(){
  int n; 
  cin>>n;
  cout<<"x = "<<n<<endl;
  cout<<"&x = "<<&n<<endl;
  cout<<"Size of Address = "<<sizeof(&n)<<"B";
  return 0;
}