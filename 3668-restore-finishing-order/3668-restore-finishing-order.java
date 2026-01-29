class Solution {
    public int[] recoverOrder(int[] order, int[] friends) {
        Set<Integer>st = new HashSet<>();
        int n = friends.length;
        for(int i=0;i<n;i++) {
            st.add(friends[i]);
        }
        int[] ans = new int[n];
        int idx = 0;
        for(int i=0;i<order.length;i++) {
            if(st.contains(order[i])) {
                ans[idx] = order[i];
                idx++;
            }
        }
        return ans;
    }
}