/*
Name - Abhishek Misar
Roll no PE 22
Panel E
batch e2
*/


#include<iostream>
#include<vector>

using namespace std;

vector<int> sortIndex (vector<int> weights, vector<int> values) {
    int max_i = 0;
    
    vector<int> order(weights.size());
    for(int i = 0; i<weights.size(); i++) {
        order[i] = i;
        
    }
    int temp;

    for(int i = 0; i<weights.size() -1; i++) {
        for(int j = 0; j<weights.size() - i - 1; j++) {
            if((double)values[order[j]]/weights[order[j]] < (double)values[order[j+1]]/weights[order[j+1]]) {
                temp = order[j];
                order[j] = order[j+1];
                order[j+1] = temp;
            }
        }
    }
    return order;

}

int getOptimalValue(int capacity, vector<int> weights, vector<int> values, vector<int> indexOrd) {
    double value = 0.0;

    for(int i = 0; i<weights.size(); i++) {
        if(capacity == 0.0) return value;
        int index = indexOrd[i];
        int a = std::min(capacity, weights[index]);
        value += a * (double)values[index]/weights[index];
        weights[index] -= a;
        capacity -= a;


    }
    return value;

}



int main() {
    int n;
    int capacity;
    cin>>n>>capacity;
    vector<int> values(n);
    vector<int> weights(n);
    for(int i = 0; i<n; i++) {
        cin>>values[i]>>weights[i];

    }

    vector<int> indexOrd = sortIndex(weights, values);
    double optimalValue = getOptimalValue(capacity, weights, values, indexOrd);

    std::cout.precision(10);
    std::cout <<"The optimal value is : "<< optimalValue << std::endl;

    return 0; 

}