class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;

        sort(nums.begin(), nums.end());

        int i = 0;

        while(i < n) {
            int j = i;

            while(j < n && nums[i] == nums[j]) {
                j++;
            }

            int temp = j - i;

            if(temp % k == 0) {
                sum += temp * nums[i];
            }

            i = j;
        }

        return sum;
    }
};