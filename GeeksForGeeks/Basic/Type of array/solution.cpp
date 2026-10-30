class Solution {
  public:
    bool type1(vector<int> &arr){
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] < arr[i-1]) return false;
        }
        return true;
    }
    bool type2(vector<int> &arr){
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] > arr[i-1]) return false;
        }
        return true;
    }
    bool type3(vector<int> &arr){
        int flag = 0;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] > arr[i-1]){
                if(flag == 1) return false;
                flag++;
            }
        }
        return true;
    }
    bool type4(vector<int> &arr){
        int flag = 0;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] < arr[i-1]){
                if(flag == 1) return false;
                flag++;
            }
        }
        return true;
    }
    int typeOfArr(vector<int>& arr) {
        if(type1(arr)) return 1;
        else if(type2(arr)) return 2;
        else if(type3(arr)) return 3;
        else if(type4(arr)) return 4;
        return -1;
    }
};