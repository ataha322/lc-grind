class TimeMap {
private:
    unordered_map<string, vector<pair<int, string>> myMap;

public:
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        myMap[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        auto it = myMap.find(key);
        if (it == myMap.end())
            return "";

        int l = 0;
        int r = it->second.size() - 1;
        int mid = 0;
        while (l <= r) {
            mid = (r-l) / 2 + l;

            if (it->second[mid].first == timestamp)
                return it->second[mid].second;
            
            if ()
        }
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
