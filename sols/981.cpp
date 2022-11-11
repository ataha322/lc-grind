class TimeMap {
private:
    unordered_map<string, vector<pair<int,string>>> theMap;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        theMap[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        string result = "";
        auto it = theMap.find(key);
        if (it == theMap.end())
            return result;

        int l = 0;
        int r = it->second.size() - 1;
        int mid = 0;
        while (l <= r) {
            mid = (r - l) / 2 + l;

            if (it->second[mid].first == timestamp)
                return it->second[mid].second;
            if (it->second[mid].first > timestamp)
                r = mid - 1;
            if (it->second[mid].first < timestamp) {
                result = it->second[mid].second;
                l = mid + 1;
            }
        }

        return result;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
