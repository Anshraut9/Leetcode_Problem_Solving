class Solution {
public:
    int countPoints(string rings) {
       int n = rings.size();
       vector<pair<int,set<char>>>vec(10);
       for(int i=1;i<n;i+=2) {
         int value = rings[i] - '0';
         char ch = rings[i-1];
         vec[value].second.insert(ch);
       }

       int no_of_rods = 0;
       for(auto it : vec) {
        if(it.second.size() == 3) {
            no_of_rods++;
        }
       }
       return no_of_rods;
    }
};