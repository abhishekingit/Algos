#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0;
    int max_one = 0;

    for(auto i = nums.begin(); i != nums.end(); i++) {
        if(*i == 0) {
            count = 0;
        } else {
            count++;
            max_one = max(max_one, count);

        }

    }

    return max_one;



}
        


int main() {

    vector<int> nums;
    int n;
    cout<<"Enter the size of the binary array\n";
    cin>>n;
    for(int i = 0; i < n ; i++) {
        int temp;
        cout<<"Enter 1 or 0 at "<<i<<endl;
        cin>>temp;
        nums.push_back(temp);
        
    }

    int result = findMaxConsecutiveOnes(nums);
    cout<<"The Max Consecutive ones in this binary array is "<<result<<endl;
        
    
    return 0;

}