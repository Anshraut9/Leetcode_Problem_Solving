class Solution {
    public boolean halvesAreAlike(String s) {
        int n = s.length();
        String str = s.toLowerCase();
        int first_vowel = 0;
        int second_vowel = 0;
        for(int i=0;i<n/2;i++) {
            if(str.charAt(i) == 'a' || str.charAt(i) == 'e' || str.charAt(i) == 'i' || 
               str.charAt(i) == 'o' || str.charAt(i) == 'u') {
                first_vowel++;
            }
        }
        for(int i=n/2;i<n;i++) {
            if(str.charAt(i) == 'a' || str.charAt(i) == 'e' || str.charAt(i) == 'i' || 
               str.charAt(i) == 'o' || str.charAt(i) == 'u') {
                second_vowel++;
            }
        }

        if(first_vowel == second_vowel) {
            return true;
        } else {
            return false;
        }
    }
}