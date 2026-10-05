#include <iostream>
using namespace std;

int sumNNums(int n){
    if(n == 0) return 0;
    return n+sumNNums(n-1);
}

int main() {
    int n;
    cin >> n;
    cout<<sumNNums(n);
    return 0;
}