#include <iostream>
#include <vector>
#include <algorithm> // For reverse function

using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();

        for (int i = 0; i < n; i++) {
            // Reverse the row
            reverse(image[i].begin(), image[i].end());

            // Invert each pixel
            for (int j = 0; j < n; j++) {
                image[i][j] = 1 - image[i][j];
            }
        }

        return image;
    }
};

// Main function to test the Solution class
int main() {
    Solution sol;

    // Example image
    vector<vector<int>> image = {
        {1, 0, 1},
        {0, 1, 0},
        {1, 0, 1}
    };

    // Call the function
    vector<vector<int>> result = sol.flipAndInvertImage(image);

    // Print the result
    cout << "Transformed image:" << endl;
    for (const auto& row : result) {
        for (int pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }

    return 0;
}
