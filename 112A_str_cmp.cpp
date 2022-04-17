#include<iostream>
#include<string>
using namespace std;

int cmp_char(char a,char b){
    a = tolower(a);
    b = tolower(b);
    return a-b;
}
int main(){
    string fstr,sstr;

    getline(cin,fstr);
    getline(cin,sstr);

    size_t n = fstr.length();
    int val = 0;

    for(size_t i =0;i<n;i++){
        if(cmp_char(fstr[i] , sstr[i]) > 0){
            val = 1;
            break;
        }else if(cmp_char(fstr[i] , sstr[i]) < 0){
            val = -1;
            break;
        }
    }

    cout<<val<<endl;

    return EXIT_SUCCESS;
}