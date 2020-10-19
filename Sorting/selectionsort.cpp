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

void selectionsort(int nums[], int size) {
    int min_el;
    for(int i = 0; i < size -1; i++) {
        min_el = i;
        for (int j = i+1; j < size; j++) {
            if(nums[j] < nums[min_el]) {
                min_el = j;
                
            }
            

        }
        swap(&nums[min_el], &nums[i]);
        

    }
}





int main() 
{
    int nums[] = {4,98,24,2,15,85};
    int n = sizeof(nums)/sizeof(nums[0]);
    selectionsort(nums, n);
    display_arr(nums, n);
        
    return 0;


}