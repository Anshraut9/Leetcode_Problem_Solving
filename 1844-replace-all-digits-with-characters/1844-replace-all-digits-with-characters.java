class Solution {
    public String replaceDigits(String s) {
        String str = "";
        int n = s.length();
        for(int i=0;i<n;i++) {
            if(i%2 != 0) {
                int value = s.charAt(i) - '0';
                char ch = s.charAt(i-1);
                char new_char = (char)(ch + value);
                str += (new_char);
            } else {
                str += (s.charAt(i));
            }
        }
        return str;
    }
}