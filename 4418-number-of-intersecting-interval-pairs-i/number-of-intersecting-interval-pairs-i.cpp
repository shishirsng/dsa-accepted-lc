class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int c=0,a1,a2,b1,b2;
        for(int i=0;i<intervals.size()-1;i++)
        {
            for(int j=i+1;j<intervals.size();j++)
            {
                a1=intervals[i][0];
                a2=intervals[i][1];
                b1=intervals[j][0];
                b2=intervals[j][1];
                if(max(a1,b1)<=min(a2,b2))c++;
            }
        }
        return c;
    }
};