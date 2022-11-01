class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int,int> myMap; //number -> its count
        priority_queue<pair<int,int>> pq;
        
        for (int num : nums) {
            myMap[num]++;
        }
        
        for (auto couple : myMap) {
            pq.push(make_pair(couple.second, couple.first));
        }
        
        for (int i = 0; i < k; i++) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        
        return result;

    }
};
