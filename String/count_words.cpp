// This program counts the word in a string by counting the spaces and 
// also takes care of the white spaces in account

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[] = "How are you bro";

    // we'll traverse and count the spaces
    int c_word=1;

    for(int i=0; a[i]!='\0';i++)
    {
        if(a[i] ==' ' && a[i-1] != ' ')
        {
            c_word++;
        }
    }

    cout<<"Number of words: "<<c_word<<endl;

    return 0;
}