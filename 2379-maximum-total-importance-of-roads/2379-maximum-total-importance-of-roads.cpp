class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        long long ans =0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[i]=0;
        }
        for(auto p:roads)
        {
            m[p[0]]++;
            m[p[1]]++;
        }
        vector<pair<int,int>>fala;
        for(auto e:m)
        {
        fala.push_back(make_pair(e.second,e.first));
        }
        sort(fala.begin(),fala.end());
        for(int i=0;i<fala.size();i++)
        {
            m[fala[i].second]=i+1;
        }
          for(auto p:roads)
        {
            ans=ans+m[p[0]]+m[p[1]];

        }
        return ans;
    }
};