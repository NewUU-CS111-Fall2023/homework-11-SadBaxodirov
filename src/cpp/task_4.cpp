/*
 * Author:
 * Date:
 * Name:
 */

class Problem4 {
    const int base = 1337;
private:
    int modPow(int x, int k) {
        int result = 1;
        x %= base;
        for (int i = 0; i < k; ++i) {
            result = (result * x) % base;
        }
        return result;
    }
public:
    int power(int a, vector<int> b) {
        a %= base;
        int result = 1;
        for (int digit : b) {
            result = (modPow(result, 10) * modPow(a, digit)) % base;
        }
        return result;
    }
};
