#include <iostream>
#include <string>
#include <unordered_set>

class Solution {
public:
    int numJewelsInStones(std::string jewels, std::string stones) {
        std::unordered_set<char> jewelSet;
        int count = 0;

        // Add all jewels to the set
        for (char jewel : jewels) {
            jewelSet.insert(jewel);
        }

        // Count stones that are jewels
        for (char stone : stones) {
            if (jewelSet.count(stone) > 0) {
                count++;
            }
        }

        return count;
    }
};

int main() {
    Solution solution;

    // Test cases
    std::cout << solution.numJewelsInStones("aA", "aAAbbbb") << std::endl; // Output: 3
    std::cout << solution.numJewelsInStones("z", "ZZ") << std::endl;       // Output: 0

    return 0;
}
