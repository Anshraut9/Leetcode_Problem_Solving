class Solution {
public:
    string largestTimeFromDigits(vector<int>& arr) {
        int n = arr.size();
        map<int,int>freq;
        for (int x:arr)  {
            freq[x]++;
        }
        string time = "";
        for(int i=2;i>= 0;i--) {
            if (freq[i] == 0)  {
               continue;
            }
            freq[i]--;

            int hour_max = -1;
            if(i == 2) {
              hour_max = 3;
            } else {
              hour_max = 9;
            }

            for(int j = hour_max;j>= 0;j--) {
                if (freq[j] == 0)  {
                  continue;
                }
                freq[j]--;

            for(int min_first=5; min_first>= 0;min_first--) {
                if (freq[min_first] == 0)  {
                    continue;
                }
                freq[min_first]--;

                for (int min_second = 9;min_second>= 0;min_second--) {
                    if (freq[min_second] == 0)  {
                        continue;
                    }
                    return to_string(i) + to_string(j) + ":" + to_string(min_first) + to_string(min_second);
                }
                freq[min_first]++;
            }
            freq[j]++;
        }
        freq[i]++;
      }
    return "";
    }
};