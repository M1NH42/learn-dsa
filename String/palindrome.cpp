// This program is to find the given string is palindrom or not
// without using second char array

#include<bits/stdc++.h>
using namespace std;

void display(char a[], int n)
{
    for(int i=0;a[i]!='\0';i++)
    {
        cout<<a[i];
    }
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    char a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"************************************\n";
    display(a,n);
    cout<<endl;
    cout<<"************************************\n";

    int j;
    for(j=0;a[j]!='\0';j++)
    {
        // this will make j to point on the last char element
    }
    j -= 1; // point to last char, not char terminator
    for(int i=0;i<=j;i++,j--)
    {
        if(a[i]!=a[j])
        {
            cout<<"Not a palindrome\n";
            break;
        }
        else if(a[i]==a[j])
        {
            cout<<"Palindrome\n";
            break;
        }
    }
    cout<<"************************************\n";

    return 0;
}