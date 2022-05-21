#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int npermute(string s){
    int nrepl = 0;
    string p = s;

    sort(begin(s),end(s));

    for(int i=0;i<s.length();i++)
        if(s[i]-p[i] != 0) nrepl++;

    return nrepl;
}

int main(){
    int t,n;
    string s;

    vector<int> answers;

    cin>>t;

    while(t>0){
        cin>>n;
        cin>>s;

        answers.push_back(npermute(s));
        t--;
    }

    for(int ans:answers)
        cout<<ans<<endl;
    


    return EXIT_SUCCESS;
}