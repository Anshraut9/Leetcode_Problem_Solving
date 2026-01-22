class Solution {
    public boolean non_decreasing(ArrayList<Integer>num_arr) {
        for(int i=0;i<num_arr.size()-1;i++) {
            if(num_arr.get(i) > num_arr.get(i+1)) {
                return false;
            }
        }
        return true;
    }
    public int minimumPairRemoval(int[] nums) {
        int operations = 0;
        ArrayList<Integer>num_arr = new ArrayList<>();
        for(int x : nums) {
            num_arr.add(x);
        }
        while(!non_decreasing(num_arr)) {
            int minSum = Integer.MAX_VALUE;
            int index = 0;
            for(int i=0;i<num_arr.size()-1;i++) {
                int sum = num_arr.get(i) + num_arr.get(i+1);
                if(sum < minSum) {
                   minSum = sum;
                   index = i;
                }
            }
            num_arr.remove(index+1);
            num_arr.set(index,minSum);
            operations++;
        }
        return operations;
    }
}