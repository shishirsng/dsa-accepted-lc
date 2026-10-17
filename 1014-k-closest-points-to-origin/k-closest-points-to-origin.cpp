class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=points.size();
        vector<pair<int,int>>a(n);
        for(int i=0;i<n;i++)
        {
            a[i].first=(points[i][0]*points[i][0] + points[i][1]*points[i][1]);
            a[i].second=i;
        }
        sort(a.begin(),a.end());
        vector<vector<int>>ans;
        int i=0;
        while(k--)
        {
            ans.push_back(points[a[i].second]);
            i++;
        }
        return ans;
    }
};
