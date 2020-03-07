// This program is for diagonal matrix using cpp
// class instead of struct as implemented below:

#include<bits/stdc++.h>
using namespace std;

class Diagonal{
    private:
        int n;
        int *A;
    public:
        Diagonal(int n){
            this->n = n;
            A = new int[n];
        }
        void Set(int i, int j, int x);
        int Get(int i, int j);
        void display();
        ~Diagonal(){
            delete []A;
        }
};

void Diagonal :: Set(int i, int j, int x){
    if(i==j){
        A[i-1] = x;
    }
}
int Diagonal :: Get(int i, int j){
    if(i==j){
        return A[i-1];
    }
    else{
        return 0;
    }
}

void Diagonal :: display(){
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            if(i==j){
                cout<<A[i]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

int main(){
    return 0;
}