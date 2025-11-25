#include<iostream>
using namespace std;

int ma(int a,int b){
    if(a%b==0) return b;
    return ma(b,a%b);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<ma(a,b)<<endl;
return 0;
}
