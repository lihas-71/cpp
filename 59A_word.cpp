#include<iostream>
#include<ctype.h>
using namespace std;

int main(){
    string word;
    int nlower = 0;
    char c;
    int i;

    cin>>word;

    for(i=0;i<word.length();i++){
        if(islower(word[i]) != 0)
            nlower++;

        
    }

    bool is_even = ( word.length()%2 == 0 );


    if(is_even){
        if(nlower < word.length()/2){
            for(i=0;i<word.length();i++)
                word[i] = toupper(word[i]);
        }else{
            for(i=0;i<word.length();i++)
                word[i] = tolower(word[i]);
        }
    }else{
        if(nlower <= word.length()/2){
            for(i=0;i<word.length();i++)
                word[i] = toupper(word[i]);
        }else{
            for(i=0;i<word.length();i++)
                word[i] = tolower(word[i]);
        }
    }

    cout<<word<<endl;


    return EXIT_SUCCESS;
}