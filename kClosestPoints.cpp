class myComparator {
public:
    int operator() (const pair<float,vector<int>>& p1, const pair<float,vector<int>>& p2) {
        return p1.first > p2.first;
    }
};


class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        float dist = 0;
        priority_queue<pair<float, vector<int>>, vector<pair<float, vector<int>>>, myComparator> pq;
        vector<vector<int>> ret;
        
        for (auto point : points) {
            dist  = sqrt (pow(point[0], 2) + pow(point[1],2));
            pq.push({dist, point});
        }
        
        for (int i = 0; i < k; i++) {
            ret.push_back(pq.top().second); pq.pop();
        }
        return ret;
    }
};
