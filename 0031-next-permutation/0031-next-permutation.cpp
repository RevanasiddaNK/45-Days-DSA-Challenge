class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1;
        for(int i=n-2;i>= 0;i--){
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }
        for(int j=n-1;j>=index && index != -1;j--){
            if(nums[j] > nums[index]){
                swap(nums[j],nums[index]);
                break;
            }
        }
        reverse(nums.begin()+index+1,nums.end());
    }
};