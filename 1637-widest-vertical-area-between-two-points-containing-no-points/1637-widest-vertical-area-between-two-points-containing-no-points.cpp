class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        vector<int> w;
        for (int i=1; i<points.size(); i++){
            int diff = points[i][0] - points[i-1][0];
            w.push_back(diff);
        }
        return *max_element(w.begin(),w.end());
    }
};