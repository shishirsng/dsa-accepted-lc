class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        vector<pair<int,int>>a(n);
        for(int i=0;i<n;i++)
        {
            a[i].first=abs(arr[i]-x);
            a[i].second=i;
        }
        sort(a.begin(),a.end());
        vector<int>ans;
        int i=0;
        while(k--)
        {
            ans.push_back(arr[a[i].second]);
            i++;
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};