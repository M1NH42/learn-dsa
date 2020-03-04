// In this program we'll count the number of vowels and consonents
// as shown below with explanation in comments section

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[]="How are you";
    int v_count=0, c_count=0;

    for(int i=0; a[i]!='\0'; i++)
    {
        if(a[i]=='a' || a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            v_count++;
        }
        else if((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z'))
        {
            c_count++;
        }
    }
    cout<<"Number of vowels: "<<v_count<<endl;

    cout<<"Number of consonents: "<<c_count<<endl;

    return 0;
}