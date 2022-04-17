#include<iostream>
#include<string>
#include<regex>

using namespace std;



int main(){
    string first_line,scores_line;
    int i,short_listed_count;
    size_t len;


    // get the data 

    getline(cin,first_line);
    getline(cin,scores_line);
    
    len = first_line.find(" ",0);
    int n = stoi(first_line.substr(0,first_line.find(" ",0)));
    int k = stoi(first_line.substr(len,first_line.length()-len));

    int scores[n];

    size_t  idx = 0;
    i = 0;

    do{
        len = scores_line.find(" ",idx) -  idx;

        // cout<<scores_line.substr(idx,len)<<'\n';
        scores[i++] = stoi(scores_line.substr(idx,len));
        idx=scores_line.find(" ",idx);

        if (idx == -1) break;

        idx++;
        // cout<<idx<<endl;
    }while((idx != string::npos) && (idx < scores_line.length()) );




    

    short_listed_count = 0;
    i=0;

    // for(int i=0;i<n;i++)
    //     cout<<scores[i]<<endl;

    // i=0;
    while(scores[i]>=scores[k-1] && scores[i]>0 && i<n){
        short_listed_count++;
        i++;
        // cout<<i<<'n';
    }

    cout<<short_listed_count<<'\n';
    

    return 0;
}