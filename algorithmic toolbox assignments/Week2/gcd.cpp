#include<iostream>

using namespace std;

long long euclidGCD(long a, long b) {
    if(b == 0)
        return a;
    int a1 = a % b;
    return euclidGCD(b, a1);

}

int main() {

    long long a, b;
    cin>>a>>b;
    long result = euclidGCD(a, b);
    cout<<result<<"\n";
    
    
    return 0;

}