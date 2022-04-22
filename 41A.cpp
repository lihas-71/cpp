#include<iostream>
using namespace std;

int main(){
    string w1,w2;

    cin>>w1;
    cin>>w2;

    bool correct = 1 ;

    for (size_t i = 0; i < w1.length(); i++)
    {
        if(w1[i] != w2[w1.length()-i-1]){
            correct = 0;
            break;
        }
    }

    if(correct)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    
    return EXIT_SUCCESS;
}