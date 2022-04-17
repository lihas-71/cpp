#include<iostream>
#include<string>
using namespace std;

int find_char_arr(char s[],char target,int n){
    for(int i=0;i<n;i++)
        if(s[i]==target) return i;
    return -1;
}

int main(){
    char name[101];
    char uniq_chars[101];


    int ntotal,i,n; 

    for(i=0;i<101;i++){
        name[i] = '0';
        uniq_chars[i] = '0';
    }
    cin>>name;

    ntotal = find_char_arr(name,'0',101)-1;

    n = 0;

    for(i=0;i<ntotal;i++){
        if( find_char_arr(uniq_chars,name[i],ntotal) == -1)
            uniq_chars[n++] = name[i];

        //cout<<find_char_arr(uniq_chars,name[i],ntotal)<<endl;
        
    }

    if(n%2 == 0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return EXIT_SUCCESS;
}