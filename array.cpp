class Solution {
    public List<List<Integer>> findDifference(int[] nums1, int[] nums2) {
        HashMap<Integer,Integer> map1 = new HashMap<>();
        HashMap<Integer,Integer> map2 = new HashMap<>();

        List<List<Integer>> ans = new ArrayList<>();
        ans.add(new ArrayList<>()); // index 0
        ans.add(new ArrayList<>()); // index 1

        for(Integer i=0;i<nums1.length;i++){
            map1.put(nums1[i], map1.getOrDefault(nums1[i],0)+1 );
        }
         for(Integer i=0;i<nums2.length;i++){
            map2.put(nums2[i], map2.getOrDefault(nums2[i],0)+1);
        }
        for(Integer key : map1.keySet()){
            if(!map2.containsKey(key)){
                ans.get(0).add(key);
            }
        }
        for(Integer key : map2.keySet()){
            if(!map1.containsKey(key)){
                ans.get(1).add(key);
            }
        }
        return ans;

        
        
    }
}
