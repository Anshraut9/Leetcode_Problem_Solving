class Solution {
    public int[] relativeSortArray(int[] arr1, int[] arr2) {
        int[] ans = new int[arr1.length];
        Arrays.sort(arr1);
        Map<Integer,Integer>freq = new HashMap<>();
        for(int x : arr1) {
            freq.put(x,freq.getOrDefault(x,0) + 1);
        }
        
        int idx = 0;
        for(int x : arr2) {
            if(freq.containsKey(x)) {
                int value = freq.get(x);
                while(value > 0) {
                    ans[idx++] = x;
                    value--;
                }
                freq.remove(x);
            }
        }
        List<Integer>remaining = new ArrayList<>(freq.keySet());
        Collections.sort(remaining);
        for(int value : remaining) {
            int count = freq.get(value);
            while(count > 0) {
                ans[idx++] = value;
                count--;
            }
        }
        return ans;
    }
}