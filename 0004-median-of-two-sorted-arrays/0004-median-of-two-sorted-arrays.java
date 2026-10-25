class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {

        List<Integer> ans = new ArrayList<>();

        int i =0 ,j = 0;
         while(i<nums1.length){
                ans.add(nums1[i]);
                i++;
         }

          while(j<nums2.length){
                ans.add(nums2[j]);
                j++;
         }

        Collections.sort(ans);
        int n = ans.size();
         if(n%2==1){
            return ans.get(n/2);
         }else{
            return (ans.get(n/2) + ans.get(n/2-1)) /2.0;
         }

    }
}