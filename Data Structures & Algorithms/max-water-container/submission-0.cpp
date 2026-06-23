class Solution {
public:
    int maxArea(vector<int>& heights) {
      int low=0;
      int n=heights.size();
      int high=n-1;
      int maxarea=INT_MIN;
       while(low<high){
          if(heights[low]>=heights[high]){
            maxarea=max(maxarea,(high-low)*heights[high]);
            high--; 
          }
          else{
            maxarea=max(maxarea,(high-low)*heights[low]);
            low++;
          }
    }
    return maxarea;
    }
};
