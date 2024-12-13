#include<iostream>
using namespace std;
int part (int arr[],int low,int high)
{
    int pv;
    pv=arr[low];
    int i=low+1;
    int j=high;
    do
    {
        while(arr[i]<pv)
        {
            i++;
        }
        while(arr[i]>pv)
        {
            j--;
        }
        if(i<j)
        {
            int tmp;
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
        }
    }while(i<j);
    int tmp;
    tmp=arr[low];
    arr[low]=arr[j];
    arr[j]=tmp;
    return j;
}
void qksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pv;
        pv=part(arr,low,high);
        qksort(arr,low,pv-1);
        qksort(arr,pv+1,high);
    }
}
void show(int arr[],int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\n";
    }
}
int main()
{
    int arr[]={4,2,5,7,3};
    int s=sizeof(arr)/sizeof(arr[0]);
    show(arr,s);
    qksort(arr,0,s-1);
    cout<<"After appying quick sort array will be\n";
    show(arr,s);
}
