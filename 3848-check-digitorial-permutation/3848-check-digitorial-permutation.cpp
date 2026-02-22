class Solution {
public:
    bool sameDigits(long long a, long long b){
    string s1 = to_string(a);
    string s2 = to_string(b);
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

    bool isDigitorialPermutation(int n) {
        long long pelorunaxi = n;   
        vector<long long> digitorial = {1, 2, 145, 40585};
        for(long long x : digitorial){
          if(sameDigits(pelorunaxi, x)) 
            return true;
        }
    return false;
    }
};