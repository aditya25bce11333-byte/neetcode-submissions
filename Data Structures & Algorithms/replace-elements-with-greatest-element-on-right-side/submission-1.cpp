class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       /* int n = arr.size();                        // time complexity of O(n square).
        int i =0,j=1;

        for ( i = 0; i < n-1; i++){
            int max_value = -1;
            for ( j = i+1; j < n; j++){
                max_value = max(max_value,arr[j]);
            }
            arr[i] = max_value;
        }
        arr[n-1] = -1;  
        return arr;*/

        int n = arr.size();
        int max_so_far = -1;

        for (int i = n-1; i>=0; i--){
            int current_element = arr[i];
            arr[i] = max_so_far;
            max_so_far = max(max_so_far,current_element);
        }
        return arr;
    }
};
