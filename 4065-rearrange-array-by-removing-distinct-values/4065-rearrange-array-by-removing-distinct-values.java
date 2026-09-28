class Solution {
    public int[] rearrangeArray(int[] nums) {
        int n = nums.length;
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < n; i++) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }
        List<Integer> keys = new ArrayList<>(map.keySet());
        Collections.sort(keys);
        int[] ans = new int[n];
        int index = 0;
        int remaining = n;

        while (remaining > 0) {
            for (int key : keys) {
                if (map.get(key) > 0) {
                    ans[index++] = key;
                    map.put(key, map.get(key) - 1);
                    remaining--;
                }
            }
        }

    return ans;
  }
}