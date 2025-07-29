public class Solution {
    public int MaxArea(int[] height) {

        int left =0;
        int right = height.Length - 1 ;
        int maxArea = 0;

        while(left<right)
        {
            int Width = right-left;
            int Height = Math.Min(height[left],height[right]);
            int area = Width * Height;

              maxArea = Math.Max(maxArea, area);

                    if (height[left] < height[right])
                        left++;
                    else
                        right--;

        }

             return maxArea;




        
    }
}