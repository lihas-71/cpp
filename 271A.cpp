#include<iostream>
using namespace std;

bool is_unique(string s){
    int i,j;

    for(i=0;i<s.length()-1;i++){
        for(j=i+1;j<s.length();j++)
            if(s[i]==s[j]) return false;
    }

    return true;
    
}

int main(){
    string y;

    cin>>y;
    
    do{
        y = to_string(stoi(y)+1);
    }while(!is_unique(y));


    cout<<y<<endl;


    return EXIT_SUCCESS;
}