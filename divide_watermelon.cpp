#include<iostream>
using namespace std;

int main(){
    int weight;
    cin>>weight;

    if(weight==2){
        cout<<"NO";
        return 0;
    }else{
        if(weight%2 == 0 ) cout<<"YES";
        else cout<<"NO";
    }
    return 0;
}