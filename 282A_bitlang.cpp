#include<iostream>
using namespace std;

int main(){
    int n,i,val;
    cin>>n;

    string op;
    val = 0;

    for(i=0;i<n;i++ ){
        cin>>op;
        if(op.find("+",0) != string::npos) 
            val++;
        else
            val--;        
    }

    cout<<val<<endl;
    return EXIT_SUCCESS;
}