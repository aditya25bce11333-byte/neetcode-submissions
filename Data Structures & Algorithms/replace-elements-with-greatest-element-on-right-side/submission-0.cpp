class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int i =0,j=1;

        for ( i = 0; i < n-1; i++){
            int max_value = -1;
            for ( j = i+1; j < n; j++){
                max_value = max(max_value,arr[j]);
            }
            arr[i] = max_value;
        }
        arr[n-1] = -1;  
        return arr;
    }
};
