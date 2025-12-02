class Solution {
    public boolean is_palindrome(String str) {
        int i=0;
        int j=str.length() -1;

        while(i < j) {
            if(str.charAt(i) != str.charAt(j)) {
                return false;
            } else {
                i++;
                j--;
            }
        }
        return true;
    }
    public String firstPalindrome(String[] words) {
        int n = words.length;
        for(String str : words) {
            if(is_palindrome(str)) {
                return str;
            }
        }
        return "";
    }
}