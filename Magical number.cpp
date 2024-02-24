class Solution {
  public:
    int findMagicalNumber(int N, vector<int> &arr) {
        // code here
        for(int i=0;i<N;i++)
        {
            if(arr[i]==i)
            return i;
        }
        return -1;
    }
};
