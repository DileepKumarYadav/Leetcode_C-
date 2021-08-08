#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int maxArea=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int l=j-i;
            int area;
            if(arr[i]>arr[j])
            {
                area=l*arr[j];
            }
            else
            {
                area=l*arr[i];
            }

            if(area>maxArea)
            {
                maxArea=area;
            }
        }
    }
    cout<<maxArea;
    return 0;
}