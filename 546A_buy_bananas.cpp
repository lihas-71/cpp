#include<iostream>
using namespace std;

int main(){
    int k,n,w,loan;
    cin>>k;
    cin>>n;
    cin>>w;
    loan = w*(w+1)/2*k-n;

    if(loan<0)
        cout<<0;
    else
        cout<<loan<<endl;
    return EXIT_SUCCESS;
}