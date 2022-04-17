#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    int n,i;
    int nums[50];
    getline(cin,str);

    n = (str.length()+1)/2;

    for(i=0;i<str.length();i=i+2){
        nums[i/2] = (int)str[i] - (int)'0';
    }

    

    sort(nums,nums+n);

    for(i=0;i<str.length();i++){
        if(i%2==0) str[i] = '0'+nums[i/2];
        else str[i] = '+';
    }

    cout<<str<<endl;


    return EXIT_SUCCESS;
}