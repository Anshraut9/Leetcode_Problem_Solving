#include <vector>
#include <numeric>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

long long sortedPredecessorSum(int n, vector<long long>& arr) {
    // Write your code here
    long long sum_value = 0;
    int last_ele = arr[n-1];
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++) {
        if(arr[i] == last_ele) {
            break;
        } else {
            sum_value += arr[i];
        }
    }
    return sum_value;
}