class Solution {
    public boolean canTransform(int[] source, int[] target) {
        long source_sum = 0;
        long target_sum = 0;
        for(int i=0;i<source.length;i++) {
            source_sum += source[i];
            target_sum += target[i];
        }
        return source_sum == target_sum;
    }
}