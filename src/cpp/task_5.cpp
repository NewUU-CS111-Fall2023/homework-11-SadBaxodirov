/*
 * Author:
 * Date:
 * Name:
 */
#include <unordered_map>
class Problem5 {
public:
    string problem5(string key, string message) {
        unordered_map<char, char> substitutionTable;
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        int index = 0;
        for (char ch : key) {
            if (ch != ' ' && substitutionTable.find(ch) == substitutionTable.end()) {
                substitutionTable[ch] = alphabet[index++];
            }
        }
        for (char ch : alphabet) {
            if (substitutionTable.find(ch) == substitutionTable.end()) {
                substitutionTable[ch] = alphabet[index++];
            }
        }
        string decodedMessage;
        for (char ch : message) {
            if (ch == ' ') {
                decodedMessage += ' ';
            } else {
                decodedMessage += substitutionTable[ch];
            }
        }
        return decodedMessage;
    }
};
