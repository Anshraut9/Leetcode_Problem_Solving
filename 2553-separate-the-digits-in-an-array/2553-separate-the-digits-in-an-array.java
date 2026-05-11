class Solution {
    public int[] separateDigits(int[] nums) {
        int n = nums.length;
        ArrayList<Integer>res = new ArrayList<>();
        for(int i=n-1;i>=0;i--) {
            int num = nums[i];
            while(num > 0) {
                int rem = num % 10;
                res.add(rem);
                num /= 10;
            }
        }
        Collections.reverse(res);

        int[] numbers = new int[res.size()];
        for(int i=0;i<res.size();i++) {
            numbers[i] = res.get(i);
        }
        return numbers;
    }
}