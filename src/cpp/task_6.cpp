/*
 * Author:
 * Date:
 * Name:
 */

class Problem6 {
public:
    bool isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    void problem6(int n, int& prime1, int& prime2) {
        while (true) {
            n++;
            if (isPrime(n)) {
                prime1 = n;
                break;
            }
        }
        while (true) {
            n++;
            if (isPrime(n)) {
                prime2 = n;
                break;
            }
        }
    }
};
