#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x1,x2,x3,idx,min_dist,d;

    cin>>x1;
    cin>>x2;
    cin>>x3;

    min_dist = numeric_limits<int>::max();

    for(idx=1;idx<=100;idx++){
        d = 0;
        d+= abs(x1-idx) + abs(x2-idx) + abs(x3-idx);
        if(d<min_dist) min_dist = d;
    }

    cout<<min_dist<<endl;

    return EXIT_SUCCESS;
}