class Solution {
public:
    bool squareIsWhite(string coordinates) {
        set<char>odd;
        set<char>even;
        odd.insert('a');
        odd.insert('c');
        odd.insert('e');
        odd.insert('g');
        even.insert('b');
        even.insert('d');
        even.insert('f');
        even.insert('h');

        char first = coordinates[0];
        int val = coordinates[1] - '0';
        if(odd.find(first) != odd.end() && val%2 != 0) {
            return false;
        } else if(even.find(first) != even.end() && val%2 == 0) {
            return false;
        }
        return true;
    }
};