class Solution {
public:
    int nthUglyNumber(int n) {
    priority_queue<long long, vector<long long>, greater<long long>> minHeap;
    unordered_set<long long> seen;

    minHeap.push(1);
    seen.insert(1);

    long long ugly = 1;
    vector<int> factors = {2, 3, 5};

    for (int i = 0; i < n; i++) {
        ugly = minHeap.top();
        minHeap.pop();

        for (int f : factors) {
            long long next = ugly * f;
            if (!seen.count(next)) {
                seen.insert(next);
                minHeap.push(next);
            }
        }
    }
    return (int)ugly;
    }
};