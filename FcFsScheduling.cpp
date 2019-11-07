#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,tmp;
    float avg;

    int a[100],w[100],x=0,t[100]={0};
     cout<<"Enter the number of process : "<<endl;

    cin>>n;

    cout<<"Enter the Processes : "<<endl;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        if(i>0)
        {
            w[i]=a[i-1];
            t[i]=w[i]+t[i-1];
        }

    }

    for(i=0;i<n;i++)
    {
        x=t[i]+x;
        cout<<"Waiting Time  of P"<<i+1<<" is : "<<t[i]<<endl;
    }
    avg = (float)x/n;

    cout<<"Average Waiting time : "<<avg<<endl;

    return 0;
}
