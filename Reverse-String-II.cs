public class Solution {
    public string ReverseStr(string s, int k) {
        char[] arr = s.ToCharArray();

        for (int i = 0; i < arr.Length; i += 2 * k) {
            int start = i;
            int end = Math.Min(i + k - 1, arr.Length - 1);

            // Reverse range [start, end]
            while (start < end) {
                char temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++;
                end--;
            }
        }

        return new string(arr);
    }
}
