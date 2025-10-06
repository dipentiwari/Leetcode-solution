#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);
        int n = nums.size();
        int left = 0, right = n - 1;

        // Find first occurrence
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                result[0] = mid;
                right = mid - 1;  // keep searching left
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        // Find last occurrence
        left = 0;
        right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                result[1] = mid;
                left = mid + 1;  // keep searching right
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return result;
    }
};
