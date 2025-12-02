class Solution {
    public String stringHash(String s, int k) {
        int n = s.length();
        String str = "";
        for(int i=0;i<n;i+=k) {
            int middle = 0;
            int end = Math.min(i + k, n);
           for(int j=i;j<end;j++) {
             int value = ((int)(s.charAt(j))) - 97;
             middle += value;
           }
           middle = middle % 26;
           str += (char)(middle + 97);
        }
        return str;
    }
}