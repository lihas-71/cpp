#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,i,sum;
    cin>>n;

    sum = 0;
    i = 1;

    while(sum<=n){
        sum += i*(i+1)/2 ;
        i++;
        // cout<<sum<<"\n";
    }

    if(sum>n) i--;

    cout<<i-1<<endl;


    return EXIT_SUCCESS;
}