/*
 * Author:
 * Date:
 * Name:
 */
#include <vector>
using namespace std;
class Problem1 {
public:
    int problem1(const vector<int>& nums, int target, int index, int currentSum) {
        if (index == nums.size()) {
            return (currentSum == target) ? 1 : 0;
        }
        int waysWithPlus = problem1(nums, target, index + 1, currentSum + nums[index]);
        int waysWithMinus = problem1(nums, target, index + 1, currentSum - nums[index]);
        return waysWithPlus + waysWithMinus;
    }

};
