#include <iostream>
using namespace std;

int multinum(int x, int y) {
    
    if (y == 0) {
        return 0; 
    } 
    else {
        return x + multinum(x, y - 1);
    }
}

int main() {
    cout << multinum(3, 4);
    return 0;
}
