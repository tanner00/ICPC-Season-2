class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        
        int maxlevel = 0;
        for (int i = 0; i < satisfaction.size(); ++i) {
            int level = 0;
            int mult = 1;
            for (int j = i; j < satisfaction.size(); ++j) {
                level += satisfaction[j] * mult;
                mult += 1;
            }
            maxlevel = max(maxlevel, level);
        }
        return maxlevel;
    }
};
