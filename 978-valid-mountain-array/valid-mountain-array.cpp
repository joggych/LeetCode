class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        int j=n-1;
        if(arr.size()<3) return false;
        while(i+1<n  && arr[i]<arr[i+1]){
            i++;
        }
        while(j>0  && arr[j-1]>arr[j]){
            j--;
        }
        return i==j && i!=0 && j!=n-1;

        //i+1<n this mean dont accesd the array size if i is last index then i+1? is nothing
    }
};