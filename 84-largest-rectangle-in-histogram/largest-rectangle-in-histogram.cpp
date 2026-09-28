class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size();
        
        vector<int> left;
        vector<int> right;
        
        stack<int> s;
        
        // Previous Smaller Element
        for (int i = 0; i < n; i++) {
            
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            
            if (s.empty()) {
                left.push_back(-1);
            }
            else {
                left.push_back(s.top());
            }
            
            s.push(i);
        }
        
        while (!s.empty()) {
            s.pop();
        }
        
        // Next Smaller Element
        for (int i = n - 1; i >= 0; i--) {
            
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            
            if (s.empty()) {
                right.push_back(n);
            }
            else {
                right.push_back(s.top());
            }
            
            s.push(i);
        }
        
        reverse(right.begin(), right.end());
        
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            int width = right[i] - left[i] - 1;
            int area = heights[i] * width;
            
            ans = max(ans, area);
        }
        
        return ans;
    }
};