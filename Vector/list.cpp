#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>d;
    int ch,ele;
    do{
        cout<<"enter 1 to enter elements in front"<<endl;
        cout<<"enter 2 to enter elements in rear"<<endl;
        cout<<"enter 3 to delete at front"<<endl;
        cout<<"enter 4 to delete at rear"<<endl;
        cout<<"enter 5 to display"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"enter elements in the front of dequeue"<<endl;
            cin>>ele;
            d.push_front(ele);
            break;
        case 2:
            cout<<"enter elements to enter in the rear"<<endl;
            cin>>ele;
            d.push_back(ele);
            break;
        case 3:
            //d.pop_front();
            int x;
            cout<<"enter element to delete at specific index"<<endl;
            cin>>x;
            int i=0;
            int pos=-1;
            for(i=0;i<d.size();i++)
            {
                if(d[i]==x)
                {
                    if(pos==-1)
                        pos=i;
                }
            }
            d.erase(d.begin()+pos);
            break;
        case 4:
            d.pop_back();
            break;
        case 5:
          for(auto i:d)
          {
              cout<<i<<" "<<endl;
          }
          break;
        }
    }while(ch<=5);
}
