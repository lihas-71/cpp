#include<iostream>
using namespace std;

int main(){
    int n,i,steps;
    int moves[] = {5,4,3,2,1};

    cin>>n;

    i = steps = 0; 

    while(n>0){
        steps += n/moves[i];
        n = n%moves[i];
        i++;
    }

    cout<<steps<<endl;


    return EXIT_SUCCESS;
}