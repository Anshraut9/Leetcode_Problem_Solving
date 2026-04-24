class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int x = 0;
        int r = 0;
        for(char ch : moves) {
            switch(ch) {
                case 'R': x++;  break;
                case 'L': x--; break;
                case '_': r++; break;
            }
        }
        return abs(x) + r;
    }
};