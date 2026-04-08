class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=nums.size()-1,count=0;
        while(i<=j){
            if (nums[i]==val){
                if (nums[j]!=val){
                    swap(nums[i],nums[j]);
                    i++;
                    count++;
                }
                j--;
            }
            else{
                i++;
                count++;
            }
        }
        return count;
    }
};