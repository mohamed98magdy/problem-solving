public class Solution
{
    public void Merge(int[] nums1, int m, int[] nums2, int n)
    {
        // If nums2 is empty, nothing to do
        if (n == 0)
            return;

        // If nums1 has no initial values, copy nums2 directly
        if (m == 0)
        {
            for (int l = 0; l < n; l++)
                nums1[l] = nums2[l];
            return;
        }

        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0)
        {
            if (nums1[i] > nums2[j])
                nums1[k--] = nums1[i--];
            else
                nums1[k--] = nums2[j--];
        }

        // Copy remaining nums2 elements if any
        while (j >= 0)
            nums1[k--] = nums2[j--];
    }
}
