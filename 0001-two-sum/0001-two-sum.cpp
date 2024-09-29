class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {

        map<int, int> m;
        vector<int> t;
        for (int i = 0; i < n.size(); i++) {
            int need = target - n[i];
            if (m.find(need) != m.end()) {
                t.push_back(m[need]);
                t.push_back(i);
                break;
            }
            m[n[i]]=i;
        }
        return t;
    }
};