#include<iostream>
#include<string>
using namespace std;

int main(){
    string line;
    int i,y,x;


    for(i=0;i<5;i++){
        getline(cin,line);
        if(line.find("1",0) != string::npos){
            x = line.find("1",0)/2;
            y = i;
            break;
        }

    }

    // cout<<"x: "<<x<<" y : "<<y;

    cout<<abs(x-2)+abs(y-2)<<endl;
    return EXIT_SUCCESS;
}