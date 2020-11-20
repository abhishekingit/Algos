#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void merge(int arr[], int start, int middle, int last) {
    int s1 = middle - start + 1;
    int s2 = last - middle;

    int b[s1], c[s2];

    for(int i = 0; i<s1; i++) {
        b[i] = arr[start + i];

    }
    for(int j = 0; j<s2; j++) {
        c[j] = arr[middle + 1 + j];

    }

    int index1 = 0;

    int index2 = 0;
     
    int k = start;

    while(index1 < s1 && index2 < s2) {
        if(b[index1] <= c[index2]) {
            arr[k] = b[index1];
            index1++;
        }
        else {
            arr[k] = c[index2];
            index2++;

        }
        k++;

    }

    while(index1 < s1) {
        arr[k] = b[index1];
        index1++;
        k++;
    }
    while(index2 < s2) {
        arr[k] = c[index2];
        index2++;
        k++;
    }

}

void mergeSort(int arr[], int start, int last) {
    
    if(start < last) {
        int mid = (start + last) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, last);
        merge(arr, start, mid, last);
        

    }
    

    
}


int main() {
    int n;
    cin>>n;
    int numbers[n];
    for(int i = 0; i<n; i++) {
        cin>>numbers[i];
    }
    mergeSort(numbers, 0, n-1);
    cout<<"Sorted Array"<<endl;
    for(int i = 0; i<n; i++) {
        cout<<numbers[i]<<" ";

    }

    return 0;

}