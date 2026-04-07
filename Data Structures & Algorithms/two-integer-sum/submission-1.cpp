class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> freq;
        for (int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int element1,element2;
        vector<int> ans;
        for (int i=0;i<nums.size();i++){
            int k=target-nums[i];
            if (k==nums[i]){
                if (freq[k]>1){
                    element1=k;
                    element2=k;
                    break;
                }
            }
            else{
                if (freq[k]>0){
                    element1=nums[i];
                    element2=k;
                    break;
                }
            }
        }
        for (int i=0;i<nums.size();i++){
            if (nums[i]==element1){
                ans.push_back(i);
            }
            else if (nums[i]==element2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
