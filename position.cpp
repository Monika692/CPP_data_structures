// #find first and last position of the same number that occured in the array
// #include <iostream>

using namespace std;

int main()
{
    int n, k;
    int count= 0;
    int p1=-1,p2=-1;
    
    cout << "element to be searched" << endl;
    cin >> k;
    cout << "enter the array elements" << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == k)
        {
            count++;
            if(count==1)    
                p1=i;
            
            p2=i;
        }
    }
    
    if(count>0)
        cout<<"No Found first Position is "<<p1<<" and Second Positin is "<<p2;
    else
        cout<<"Not Found ";
    

}

