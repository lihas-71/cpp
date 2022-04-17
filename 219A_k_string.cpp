#include<iostream>
#include<map>
using namespace std;

int  main(){
    int n,i,times;
    string str;
    string output;
    map<char,int> db;

    cin>>n;
    cin>>str;

    // get count of all chars
    for(i=0;i<str.length();i++){
        if( db.find(str[i]) == db.end() ){
            db[str[i]] = 1;
        }else{
            db[str[i]] += 1;
        }
    }

    output="";

    map<char,int>::iterator it;
    for(it=db.begin();it != db.end();it++){
        if( (it->second % n) != 0){
            cout<<-1;
            return EXIT_SUCCESS;
        }

        times = (it->second)/n;
        
        for(i=0;i<times;i++)
            output.push_back(it->first);


    }
    string final;
    for(i=0;i<n;i++)
        final += output;
    cout<<final<<endl;



    return EXIT_SUCCESS;
}