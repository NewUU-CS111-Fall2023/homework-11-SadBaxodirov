/*
 * Author:
 * Date:
 * Name:
 */
#include <unordered_set>
class Problem3 {
private:
    bool segment(string s, int start, unordered_set<string> wordDict) {
        if (start == s.length()) {
            return true;
        }
        for (int end = start + 1; end <= s.length(); ++end) {
            string currentWord = s.substr(start, end - start);
            if (wordDict.count(currentWord) > 0 && segment(s, end, wordDict)) {
                return true;
            }
        }
        return false;
    }
public:
    bool problem3(string s, vector<string> wordDict) {
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        return segment(s, 0, dict);
    }
};
