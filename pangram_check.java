import java.util.* ;
import java.io.*; 
public class Solution {
	
	public static boolean ninjaGram(String str) {
		// Write your code here
		str = str.toLowerCase();
		boolean[] seen = new boolean[26];
		for(int i=0;i<str.length();i++) {
			char ch = str.charAt(i);
			if(ch >= 'a' && ch <= 'z') {
                seen[ch-'a'] = true;
			}
		}

		for(int i=0;i<26;i++) {
			if(seen[i] == false) {
				return false;
			}
		}
		return true;
	}
}
