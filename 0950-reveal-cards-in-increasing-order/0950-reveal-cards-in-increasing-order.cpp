class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
    sort(deck.begin(), deck.end());
    queue<int> q;
    for (int i = 0; i < n; i++) {
        q.push(i);
    }
    
    vector<int> ans(n);
    for (int card : deck) {
        int idx = q.front();
        q.pop();
        ans[idx] = card;
        if (!q.empty()) {
            q.push(q.front());
            q.pop();
        }
    }
    return ans;
    }
};