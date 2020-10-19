#include <iostream>
using namespace std;

void display_arr (int nums[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;    

}


void insertionsort(int nums[], int size) {
    int key,i,j;

    for (i = 1; i < size; i++) {
        key = nums[i];
        j = i-1;
        while(j>=0 && nums[j] > key) {
            nums[j+1] = nums[j];
            j = j-1;

        }
        
        nums[j+1] = key;
        

        
    }
}





int main() 
{
    int nums[] = {4,98,24,2,15,85};
    int n = sizeof(nums)/sizeof(nums[0]);
    insertionsort(nums, n);
    display_arr(nums, n);
        
    return 0;


}