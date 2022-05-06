#include<iostream>
using namespace std;

int main(){
    int denominations[] = {100,20,10,5,1};
    int nbills = 0,n;

    cin>>n;

    for(int bill:denominations){
        nbills += n/bill;
        n -= (n/bill)*bill;

        if(n%bill == 0) break;
    }

    cout<<nbills<<endl;
    return EXIT_SUCCESS;
}