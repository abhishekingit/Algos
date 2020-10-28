#include<iostream>

using namespace std;

int getChange(int n) {
    int no_of_tenCoins = n / 10;
    int no_of_fiveCoins = ((n - no_of_tenCoins * 10) / 5);
    int no_of_oneCoins = (n - no_of_tenCoins * 10 - no_of_fiveCoins * 5);
    return no_of_tenCoins + no_of_fiveCoins + no_of_oneCoins;
}

int main() {
    int no;
    cin>>no;
    cout<<getChange(no)<<endl;
    
    return 0;

}