class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int size = position.size();
        vector<pair<int,int>> pos_speed;
        vector<float> time(size);
        int res = size;
        
        for (int i = 0; i < size; i++)
            pos_speed.push_back({position[i], speed[i]});
        
        sort(pos_speed.begin(), pos_speed.end());
        
        for (int i = 0; i < size; i++)
            time[i] = (float)(target - pos_speed[i].first) / pos_speed[i].second;
        
        for (int i = size-1; i > 0; i--) {
            if (time[i-1] <= time[i]) {
                time[i-1] = time[i];
                res--;
            }
        }
        

        return res;
    
    }
};
