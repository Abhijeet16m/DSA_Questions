class Solution {
  public:
    void merge(vector<int> &v, int l, int r){
        vector<int> temp;
        int mid = l + (r - l)/2;
        int i = l;
        int j = mid + 1;
        while(i <= mid && j <= r){
            if(v[i] > v[j]){
                temp.push_back(v[j]);
                j++;
            }
            else{
                temp.push_back(v[i]);
                i++;
            }
        }
        while(i <= mid){
            temp.push_back(v[i]);
            i++;
        }
        while(j <= r){
            temp.push_back(v[j]);
            j++;
        }
        for(int x = l; x <= r; x++){
            v[x] = temp[x - l];
        }
        
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        if(l == r){
            return;
        }
        int mid = l + (r - l)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, r);
    }
};