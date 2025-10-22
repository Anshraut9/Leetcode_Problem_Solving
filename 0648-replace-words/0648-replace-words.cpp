class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
       int n = dictionary.size();
       int m = sentence.size();

       set<string>st;
       for(string &word : dictionary) {
         st.insert(word);
       } 
       
       string str = "";
       string ans = "";

       for(int i=0;i<m;i++) {
        bool check = false;
         if(sentence[i] == ' ') {
            for(const auto &sub : st) {
                if(str.rfind(sub,0) == 0) {
                    ans += sub;
                    str = "";
                    ans += ' ';
                    check = true;
                    break;
                }
            } 
            if(check == false) {
                ans += str;
                str = "";
                ans += ' ';
            }
         } else {
            str += sentence[i];
         }
       } 

       if(!str.empty()) {
        bool checking = false;
           for(const auto &sub : st) {
                if(str.rfind(sub,0) == 0) {
                    ans += sub;
                    str = "";
                    checking = true;
                    break;
                }
            }
         if(!checking) {
           ans += str;
         }
       }
       return ans;
    }
};