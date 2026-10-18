class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n=words.size();
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[words[i]]++;
        }
        vector<pair<int,string>>a(mp.size());
        int i=0;
        for(auto it:mp)
        {
            a[i].first=it.second;
            a[i].second=it.first;
            i++;
        }
        sort(a.begin(), a.end(), [](const pair<int,string>& p1, const pair<int,string>& p2) {
            if (p1.first == p2.first) 
                return p1.second < p2.second; 
            return p1.first > p2.first;
        });
        vector<string>res;
        i=0;
        while(k--)
        {
            res.push_back(a[i].second);
            i++;
        }
        return res;
    }
};