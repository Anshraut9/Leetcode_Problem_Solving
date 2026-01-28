class Solution {
    public List<Integer> stableMountains(int[] height, int threshold) {
        List<Integer> new_list = new ArrayList<>();
        int n = height.length;
        for(int i=1;i<n;i++) {
            if(height[i-1] > threshold) {
                new_list.add(i);
            }
        }
        return new_list;
    }
}