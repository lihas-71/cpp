#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n,i,len;
    cin>>n;

    char words[100][101];

    for(i=0;i<n;i++){
        cin>>words[i];
    }

    for(i=0;i<n;i++){
        len = strlen(words[i]);
        if(len<=10) cout<<words[i]<<"\n";
        else cout<<words[i][0]<<len-2<<words[i][len-1]<<"\n";
    }

    return EXIT_SUCCESS;
}

