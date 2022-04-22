#include<iostream>
using namespace std;

int main(){
    int n,k,last_digit;

    cin>>n;
    cin>>k;

    while(k>0){
        last_digit = n%10;

        if(last_digit != 0)
            n -= 1;
        else
            n = n/10;

        k--;
    }

    cout<<n<<endl;


    return EXIT_SUCCESS;
}