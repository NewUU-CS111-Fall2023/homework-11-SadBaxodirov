/*
 * Author:
 * Date:
 * Name:
 */

class Problem2 {
private:
    bool partition(vector<int> nums, int start, int target_sum, int current_sum) {
        if (current_sum == target_sum) {
            return true;
        }
        for (int i = start; i < nums.size(); ++i) {
            if (current_sum + nums[i] <= target_sum) {
                if (partition(nums, i + 1, target_sum, current_sum + nums[i])) {
                    return true;
                }
            }
        }
        return false;
    }
public:
    bool problem2(vector<int> nums) {
        int total_sum = 0;
        for (int num : nums) {
            total_sum += num;
        }
        if (total_sum % 2 != 0) {
            return false;
        }
        int target_sum = total_sum / 2;
        return partition(nums, 0, target_sum, 0);
    }
};
