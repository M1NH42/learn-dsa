// This program is to check if two strings are anagrams or not

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[]="madam";
    char b[]="adamm";

    int h[26]={0}; // hash array

    for(int i=0; a[i]!='\0';i++)
    {
        h[a[i]-97] += 1;
    }
    for(int i=0; b[i] != '\0'; i++)
    {
        h[(b[i]-97)] -= 1;
    }
    for(int i=0;i<26;i++)
    {
        if(h[i]>0)
        {
            cout<<"Not an anagram\n";
        }
        else
        {
            cout<<"Anagram\n";
            break;
        }
    }
    //cout<<"Anagram\n";
    return 0;
}