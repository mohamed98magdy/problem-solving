class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {


        if(arr.size() == 0)
    return{} ;

    sort(arr.begin(),arr.end());
    int minimumAbsolute = abs(arr[1] - arr[0]);

    for(int i=2;i<arr.size();i++)
    {
        if(abs(arr[i] - arr[i-1]) < minimumAbsolute)
        minimumAbsolute = abs(arr[i] - arr[i-1]);
    }


    
        vector<vector<int>> result;
   
    for(int i=1;i<arr.size();i++)
    {
        if(abs(arr[i] - arr[i-1]) == minimumAbsolute)
        {
           result.push_back ({arr[i-1],arr[i]});
        }
         
                    
    }
    for(const auto& pair : result) {
        cout << "[" << pair[0] << "," << pair[1] << "] ";
    } 

    return result;

   
        
    }
};