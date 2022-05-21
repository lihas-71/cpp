#include<iostream>
#include<vector>
using namespace std;

char chr(int c){
    return static_cast<char>(c);
}

int main(){
    int n,k;
    cin>>n;
    cin>>k;

    vector<char> pswd;

    char a = 'a';
    bool b = true;

    while(n>0){
        if(k>0) pswd.push_back(chr(a++));
        else {
            pswd.push_back(chr(b?pswd[0]:pswd[1]));
            b = !b;
        }
        k--;
        n--;
    }

    for(auto c:pswd)
        cout<<c;

    cout<<endl;

    return EXIT_SUCCESS;
}