#include <iostream>
using namespace std;

long long factorial(int n){
    if(n == 0 || n == 1)
        return 1;
    return (long long)n * factorial(n - 1);
}

long long sum(int n){
    return (long long)n * (n + 1) / 2;
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl << sum(n) << endl;
    return 0;
}
