#include<iostream>
using namespace std;

int main()
{
    int s[100],n,i,j,temp;
    cout<<"Enter The Limit : ";
    cin>>n;
 
    cout<<"Enter "<<n<<" Value :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
 
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
 
    cout<<"Sorted Array is : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}
