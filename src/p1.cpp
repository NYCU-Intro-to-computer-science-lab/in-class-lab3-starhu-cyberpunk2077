#include <iostream>
using namespace std;
long long factorial(int n){
    int f = 1;
    for (int i = 1; i <= n; i++){
        f *= i;
    }
    return f;
}
long long sum(int n){
    int s = 0;
    s = n*(n+1)/2;
    return s;
}
int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl << sum(n) << endl;
    return 0;
}
