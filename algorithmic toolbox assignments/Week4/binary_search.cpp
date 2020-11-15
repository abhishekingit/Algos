#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;

}

void bubblesort(int nums[], int size) {
    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j < size-i-1; j++) {
            if(nums[j] > nums[j+1]) {
                swap(&nums[j], &nums[j+1]);

            }
        }
    }
}

int binarySearch(int nums[], int low, int high, int key) {
    if(high >= low) {

    int mid = (low + high)/2;
    if (key == nums[mid]) {
        return mid;

    } else if(key < nums[mid]) {
        return binarySearch(nums, low, mid - 1, key);
    } else {
        return binarySearch(nums, mid + 1, high, key);
    }  
    
    }

    return -1;
    
    
}




int main() 
{
    int n;
    cin>>n;
    int nums[n];
    for(int i = 0; i<n; i++) {
        cin>>nums[i];
    }
    int k;
    cin>>k;
    int keys[k];
    for(int i = 0; i<k; i++) {
        cin>>keys[i];
    }

    bubblesort(nums, n);
    for(int i = 0; i<k; i++) {
        cout<<binarySearch(nums, 0, n-1, keys[i])<<" ";
    }
    // int result = binarySearch(nums, 0, n-1, key);
    // (result == -1) ? cout<<"Element is not present in an array" : cout<<"Element is present at the index " << result;

    
        
    return 0;


}