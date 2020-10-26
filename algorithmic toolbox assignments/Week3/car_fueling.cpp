#include<iostream>
#include<vector>

using namespace std;

int minRefills(int dist, int cap, vector<int>& stations, int start, int refills) {
    
    if((start + cap) >= dist) {
        return refills;

    }
    if(stations.size() == 0) {
        return -1;

    }
    int pre_start = start;
    for(int i = 0; i < stations.size(); i++) {
        if(stations[i] <= (start + cap)) {
            pre_start = stations[i];

        } else {
            if(i != 0) {
                stations.erase(stations.begin(), stations.begin() + i);

            } else {
                stations.erase(stations.begin());
            }

            return minRefills(dist, cap, stations, pre_start, refills+1);

        }
    }

    return (pre_start + cap) >= dist ? refills + 1 : -1;


}

int result_minRefills(int dist, int cap, vector<int>& stations) {
    return minRefills(dist, cap, stations, 0, 0);

}


int main() {
    int d;
    cin>>d;
    int cp;
    cin>>cp;
    int n;
    cin>>n;

    vector<int> stations(n);
    for (int i = 0; i < n; i++)
    {
        cin>>stations[i];

    }

    cout<<result_minRefills(d, cp, stations)<<endl;
       
    
    
    return 0;

}