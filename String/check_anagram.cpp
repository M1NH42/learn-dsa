// This program is to check if two strings are anagrams or not

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[]="decimal";
    char b[]="medicak";

    int h[26]={0}; // hash array

    for(int i=0; a[i]!='\0';i++)
    {
        h[a[i]-97] += 1;
    }

    int i;
    for(i=0; b[i] != '\0'; i++)
    {
        h[(a[i]-97)] -= 1;
        if((h[a[i]-97])<0)
        {
            cout<<"not anagram\n";
            break;
        }
    }
    if(b[i]=='\0')
    {
        cout<<"Anagram\n";
    }
    
    //cout<<"Anagram\n";
    return 0;
}