#include<iostream>
using namespace std;
int main(){
    int n,i;
    int nanton_win = 0;
    int ndanik_won = 0;

    cin>>n;

    string outcomes ;

    cin>>outcomes;

    for(char c:outcomes){
        if(c=='A')
            nanton_win++;
        else
            ndanik_won++;
    }

    if(nanton_win>ndanik_won)
        cout<<"Anton"<<endl;
    else if(nanton_win==ndanik_won)
        cout<<"Friendship"<<endl;
    else
        cout<<"Danik";



    return EXIT_SUCCESS;
}