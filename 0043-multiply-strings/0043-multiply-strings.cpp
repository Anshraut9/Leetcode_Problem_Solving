class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

    vector<int> result(num1.size() + num2.size(), 0);
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    for (int i = 0; i < num1.size(); i++) {
        for (int j = 0; j < num2.size(); j++) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            result[i + j] += mul;
            result[i + j + 1] += result[i + j] / 10;
            result[i + j] %= 10;
        }
    }
    while (result.back() == 0) result.pop_back();
    string res;
    for (int i = result.size() - 1; i >= 0; i--) {
        res += result[i] + '0';
    }

    return res;
    }
};