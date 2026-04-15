class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) { 
        if(arr.size() == 0) return arr;
        int temp = arr[arr.size() -1];   
        arr[arr.size() - 1] = -1; 
        for(int i = arr.size() - 2; i>= 0; i --){
            int x = arr[i];
            arr[i] = temp; 
            temp = max(temp, x); 
        }
        return arr;
    }
};