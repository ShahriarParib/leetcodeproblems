class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int zeroes = 0;
   
    for (int i = 0; i < nums.size(); i++)
    {
       
         if (nums[i] != 0)
        {
            swap(nums[i],nums[zeroes]);
            zeroes++;
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {

        cout << nums[i] << " ";
    }
        
    }
};