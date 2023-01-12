#include "iostream"
using namespace std;
void rotate(int ar[],int size);
int main()
{
    int size=0,i=0;
    cout<<"Size of the Array: ";
    cin>>size;
    int ar[size];
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>ar[i];
    }
    rotate(ar,size);
}
void rotate(int ar[],int size)
{
    int k=0;
    int temp[size];
    temp[k]=ar[size-1];
    for(int i=0;i<size;i++)
    {
        temp[i+1]=ar[i];
    }
    cout<<"Array after Rotation: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<temp[i]<<"\t";
    }
    cout<<endl;
}
