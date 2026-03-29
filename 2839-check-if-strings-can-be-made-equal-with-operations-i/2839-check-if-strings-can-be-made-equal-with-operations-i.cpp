class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if(s1==s2) {
            return true;
        }
        string refer = s2;
        swap(s2[0],s2[2]);
        if(s1==s2) {
            return true;
        }

        swap(refer[1],refer[3]);
        if(s1==refer) {
            return true;
        }

        swap(refer[0],refer[2]);
        if(s1==refer) {
            return true;
        }

        return false;
    }
};