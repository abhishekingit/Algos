#include <iostream>
using namespace std;

void display_arr (int nums[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;    

}

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



int main() 
{
    int nums[] = {4,98,24,2,15,85};
    int n = sizeof(nums)/sizeof(nums[0]);
    bubblesort(nums, n);
    display_arr(nums, n);
        
    return 0;


}