#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color)
            return image;

        int start_color = image[sr][sc];

        image[sr][sc] = color;
        
        if (sr + 1 < image.size() && image[sr+1][sc] == start_color)
            floodFill(image, sr + 1, sc, color);

        if (sr - 1 >= 0 && image[sr-1][sc] == start_color)
            floodFill(image, sr - 1, sc, color);

        if (sc + 1 < image[0].size() && image[sr][sc+1] == start_color)
            floodFill(image, sr, sc + 1, color);

        if (sc - 1 >= 0 && image[sr][sc-1] == start_color)
            floodFill(image, sr, sc - 1, color);

    }
};