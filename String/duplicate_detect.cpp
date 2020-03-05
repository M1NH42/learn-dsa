/* 
    * This program finds duplicate letter from the srting
    * Here we'll use hash table to store their count
    * And then check if any of the element occurs more 
    * than once then return duplicate else not duplicate
*/

#include<bits/stdc++.h>
using namespace std;
/* 
int duplicate(int a[], int n)
{
    int h[26]={0}; // create hash table of size 26 (0-25) letters

    for(int i=0; a[i] != '\0'; i++)
    {
        h[a[i]-97] += 1;
    }
    for(int i=0;i<26;i++)
    {
        if(h[i]>1)
        {
            cout<<"Duplicate elements\n";
            //return 0;
        }
        else
        {
            cout<<"Unique elements\n";
            return 0;
        }   
    }
}
 */
int main()
{
    /* int n;
    cout<<"Enter n: ";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]; // takes input from the user
    } */
    /////duplicate(a,n);
    char a[]="aallaammm";
    int h[26]={0}; // create hash table of size 26 (0-25) letters

    for(int i=0; a[i] != '\0'; i++)
    {
        h[(a[i]-97)] += 1;
    }
    for(int i=0;i<26;i++)
    {
        if(h[i]>1)
        {
            cout<<"Duplicate elements\n";
            cout<<"************************\n";
            cout<<i+97<<endl;
            //return 0;
        }
    }

    cout<<"Unique elements\n";
    return 0;
}