#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> symbolMap;
        for(char symbol : s)
            symbolMap[symbol] += 1;
        for(char symbol : t)
            symbolMap[symbol] -= 1;
        for(const auto& [key, val] : symbolMap)
            if(val != 0) return false;
        return true;
    }
};