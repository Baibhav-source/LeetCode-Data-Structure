class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> output;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
       int idx = 0;
       for(int i = 0;i<nums1.size();i++){
           for(int j = idx;j<nums2.size();j++){
               if(nums2[j]>nums1[i])
               break;

                idx++;
                if(nums1[i]==nums2[j]){
                    output.push_back(nums1[i]);
                    break;
                }
           }
       }
        return output;
    }
};
