#include<iostream>
#include<vector>
#include<string>
using namespace std;

string f(int n,int m){
    for(int j = 2;j<n;j++)
        if(n/j==m && n%j==0) return "YES";

    return "NO";
}

int main(){
    int t,n,m;
    vector<string> answers;

    cin>>t;

    while (t>0){
        cin>>n;
        cin>>m;

        answers.push_back(f(n,m));
        t--;
    }
    
    for(auto ans:answers)
        cout<<ans<<endl;



    return EXIT_SUCCESS;
}