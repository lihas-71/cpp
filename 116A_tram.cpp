#include<iostream>
using namespace std;

int main(){
    int n,i,npassengers,max;

    cin>>n;
    int a[n];
    int b[n];

    for(i=0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
    }

    npassengers = max = 0;

    for(i=0;i<n;i++){
        npassengers -= a[i];
        npassengers += b[i];

        if(npassengers>=max)
            max = npassengers;

    }

    cout<<max<<endl;

    return EXIT_SUCCESS;
}