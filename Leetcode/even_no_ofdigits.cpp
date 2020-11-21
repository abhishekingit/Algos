#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int findNumbers(vector<int>& nums) {
    int evenNo = 0;
    int temp;

    for(int i = 0; i<nums.size(); i++) {
        int count = 0;
        temp = nums[i];
        while(temp != 0) {
            temp = temp / 10;
            count++;            
        }   
        if(count % 2 == 0) {
            evenNo++;
        } 
    }
    return evenNo;

}



int main() {
    int n;
    cout<<"Enter the size of Array"<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the numbers in the array"<<endl;
    for(int i = 0; i<n; i++) {
        cin>>nums[i];        
    }
    int evenNoDigits = findNumbers(nums);
    cout<<"Numbers with Even Number of Digits: "<<evenNoDigits<<endl;
    return 0;

}