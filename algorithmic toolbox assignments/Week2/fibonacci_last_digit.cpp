#include<iostream>


using namespace std;

int fibonacci_find_last_digit(long long number) {
    
    int f1 = 0;
    int f2 = 1;
    int result;

    for(int i = 2; i <= number; i++) {
            
        result = (f1 + f2) % 10;
        f1 = f2;
        f2 = result;

        
    }

        
    return result;

    
}


int main() {
    long long n;
    cin>>n;
    int result = fibonacci_find_last_digit(n);
    cout<<result<<"\n";
        
    return 0;

}