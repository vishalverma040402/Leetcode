class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         vector<int> output;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        while( i < nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]) i++;
            else if(nums1[i] == nums2[j]){
                output.push_back(nums1[i]);
                i++;
                j++;
            }
            else{
                j++;
            }
            
        }
       output.erase(unique(output.begin(),output.end()),output.end());
        return output;
    }
};