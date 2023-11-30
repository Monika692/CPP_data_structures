// array[]={1,2,3,2,1}

class Solution{
    public:
    bool IsPerfect(int a[],int n)
    {
        int i=0;
        int j=n-1;
        while(i<j && a[i]==a[j])
        {
            i++;
            j--;
        }
        if(i==j)
        return true;
        else
        return false;
    }
};
