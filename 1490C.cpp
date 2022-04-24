#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string is_expressible_as_sum_of_cubes(long long x,vector<long long> cubes){

    auto it = binary_search(cubes.begin(),cubes.end(),0);
    long i;
    int n = 10000;


    for(i=0;i<n && ((x-cubes[i])>0);i++){
        it = binary_search(cubes.begin(),cubes.end(),x-cubes[i]);
        if(it)
            return "YES";
    }

    return "NO";

}

int main(){
    int t; /// number of test cases
    long long i;
    int n = 10000;
    long long x;
    vector<long long> cubes;



    for(i=0;i<n;i++)
        cubes.push_back( (i+1)*(i+1)*(i+1) );


    

    cin>>t;

    string result[100];

    for(i=0;i<t;i++){
        cin>>x;
        result[i] = is_expressible_as_sum_of_cubes(x,cubes);
    }

    for(i=0;i<t;i++)
        cout<<result[i]<<endl;

    return EXIT_SUCCESS;

}