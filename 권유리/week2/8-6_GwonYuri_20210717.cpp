class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target <= nums[0]) return 0;
        int start = 0;
        int end = nums.size() - 1;
        int mid;
        while(start <= end){
            mid = (start + end) / 2;
            if(target == nums[mid]) return mid;
            else if(target < nums[mid]){
                end = mid -1;
            }else {
                start = mid+1;
            }
        }
        if(start > end) return end+1;
        return -1;
    }
};