#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::string sortSentence(std::string s) {
        std::vector<std::pair<int, std::string>> words;
        std::string word;

        // Split the sentence and extract position numbers
        for (char c : s) {
            if (c == ' ') {
                if (!word.empty()) {
                    int pos = word.back() - '0';
                    word.pop_back();
                    words.push_back({pos, word});
                    word.clear();
                }
            } else {
                word += c;
            }
        }

        // Handle the last word
        if (!word.empty()) {
            int pos = word.back() - '0';
            word.pop_back();
            words.push_back({pos, word});
        }

        // Sort words based on their position
        std::sort(words.begin(), words.end());

        // Join words back into a sentence
        std::string result;
        for (const auto& pair : words) {
            if (!result.empty()) {
                result += " ";
            }
            result += pair.second;
        }

        return result;
    }
};

int main() {
    Solution solution;

    // Test cases
    std::cout << solution.sortSentence("is2 sentence4 This1 a3") << std::endl;
    std::cout << solution.sortSentence("Myself2 Me1 I4 and3") << std::endl;

    return 0;
}
