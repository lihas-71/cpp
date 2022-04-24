#include<iostream>
using namespace std;

int main(){
    int n,i;
    
    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    int nodd,neven;
    nodd = neven = 0;

    for(i=0;i<n;i++){
        if(a[i]%2 == 0) neven++;
        else nodd++;
    }


    if(nodd<neven){
        for(i=0;i<n;i++)
            if(a[i]%2 == 1) cout<<i+1<<endl;
    }else{
        for(i=0;i<n;i++)
            if(a[i]%2 == 0) cout<<i+1<<endl;
    }

    return EXIT_SUCCESS;
}