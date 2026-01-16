class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        int i1 = 0;
        int i2 = 0;
        vector<string>arr1,arr2;
        string word;
        stringstream ss1(sentence1);
        stringstream ss2(sentence2);

        while(ss1>>word) arr1.push_back(word);
        while(ss2>>word) arr2.push_back(word);

        while(i1 < arr1.size() && i2<arr2.size() && arr1[i1] == arr2[i2]) {
            i1++;
            i2++;
        }
        int j1 = arr1.size() - 1;
        int j2 = arr2.size() - 1;
        while(j1 >= i1 && j2 >= i2 && arr1[j1] == arr2[j2]) {
            j1--;
            j2--;
        }

        return (i1>j1 || i2 > j2);
    }
};