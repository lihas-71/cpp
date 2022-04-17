#include<iostream>
using namespace std;

int main(){
    string input;
    string astr,bstr;
    int a,b,t;

    getline(cin,input);
    astr = input.substr(0,input.find(" ",0));
    bstr = input.substr(input.find(" ",0),input.length()-input.find(" ",0));

    a = stoi(astr);
    b = stoi(bstr);

    t = 0;

    while(a<=b){
        a *= 3;
        b *= 2;
        t++;
    }

    cout<<t<<endl;
    return EXIT_SUCCESS;
}