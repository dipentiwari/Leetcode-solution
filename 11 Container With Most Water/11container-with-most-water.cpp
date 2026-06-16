class Solution {
public:
    int maxArea(vector<int>& height) {
    int n=height.size();
    int area=0,val;
    int min;
    int i=0;
    int j=n-1;
    while(i<j){
       
        if(height[i]>height[j]){
            min=height[j];
        }
        else{
            min=height[i];
        }
        int idx=j-i;
        val=min*idx;
       
        if(area<val){
            area=val;
        }
       
        if(height[i]>height[j]){
            j--;
        }
        else{
            i++;
        }
    }
    return area;    
    }
};