class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        for(int i = 0;i<nums.size();i++){
            int numtofind = target - nums[i];
            for(int index = i+1;index<nums.size();index++){
                if(numtofind == nums[index]){
                    output.push_back(i);
                    output.push_back(index);
                }
            }
        }
        return output;
    }
};
