#include<iostream>
#include<stdio.h>
#include<omp.h>
using namespace std;
#define size 100000



void swap(long long int *a, long long int *b) {
    long long int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    // omp_set_num_threads(4); 
    // int arr[] = {9, 7, 3, 8, 5, 6, 4, 1, 2};
    long long int arr[size];

    for(long long int i = 0; i<size; i++) {
        arr[i] = size - i;
    }
    

    for(long long int i =0; i<size; i++) {
        cout<<arr[i]<<" ";

    }    
    //serial bubble sort
    double start1 = omp_get_wtime();
    
    for(long long int i = 0; i<size-1; i++) 
    {
        // cout<<"value of i = "<<arr[i]<<endl;
        for(long long int j = 0; j<size-i-1; j++)
        {
            // cout<<"\t"<<j;
            if(arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);

            }

        }

    }
    double end1 = omp_get_wtime();

    double serialTime = end1 - start1;


    cout<<endl;

    ///Displaying the array
    for(long long int i =0; i<size; i++) {
        cout<<arr[i]<<" ";

    }
    cout<<endl;

    // int newarr[] = {9, 7, 3, 8, 5, 6, 4, 1, 2};
    long long int newarr[size];

    for(long long int i = 0; i<size; i++) {
        newarr[i] = size - i;
    }
    
    //Parallel code 

    double start2 = omp_get_wtime();
    for(long long int k = 0; k<=size/2; k++) 
    {
        #pragma omp parallel for
        for(long long int i = 1; i<size-1; i+=2) 
        {
            if(newarr[i] > newarr[i+1]) {
                swap(&newarr[i], &newarr[i+1]);

            }

        }

        #pragma omp parallel for
        for(long long int j = 0; j<size-1; j+=2) 
        {
            if(newarr[j] > newarr[j+1]) {
                swap(&newarr[j], &newarr[j+1]);

            }

        }      


    }
    double end2 = omp_get_wtime();

    double parallelTime = end2 - start2;



    ///Displaying the array
    for(long long int i =0; i<size; i++) {
        cout<<newarr[i]<<" ";

    }
    
    cout<<endl;
    cout<<serialTime<<endl;
    cout<<parallelTime<<endl;
    
    
    return 0;

}