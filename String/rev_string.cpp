// This program will reverse the given string without using another char array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; // size of char array if n=5 then 4 elements because it includes a null character
    cout<<"Enter n: ";
    cin>>n;

    char a[n];

    // take input from keyboard/user
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j;
    for(j=0;a[j]!='\0'; j++){
        // this will make j represent the end of the string i.e char end
    }
    j -= 1;

    char t;
    for(int i=0; i<j; i++,j--){ // we'll swap the elements from i=0 with j=n-1
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    cout<<"######################################\n";
    printf("%s\n", a);


    return 0;

}