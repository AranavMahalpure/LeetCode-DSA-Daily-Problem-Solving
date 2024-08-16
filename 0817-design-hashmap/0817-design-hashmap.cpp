class MyHashMap {
public:
   std::unordered_map<int, int> mp;

    MyHashMap() {}

    // Store or update the value associated with the key
    void put(int key, int value) {
        mp[key] = value;  // Store the value directly
    }
    
    // Retrieve the value for the key, or return -1 if the key doesn't exist
    int get(int key) {
        if (mp.find(key) != mp.end()) {
            return mp[key];  // Return the value directly
        }
        return -1;  // Return -1 if the key is not found
    }
    
    // Remove the key-value pair if it exists
    void remove(int key) {
        mp.erase(key);  // Directly erase the key
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */