#include<iostream>
#include<string>
using namespace std;

int main(){
    string nstr;
    int n,will_solve_count,student_count;

    getline(cin,nstr);
    n = stoi(nstr);

    string know_ans;

    will_solve_count = 0;

    for(int i=0;i<n;i++){
        student_count = 0;
        getline(cin,know_ans);

        if(know_ans[0]=='1') student_count++;
        if(know_ans[2]=='1') student_count++;
        if(know_ans[4]=='1') student_count++;

        if(student_count>=2) will_solve_count++;

    }

    cout<<will_solve_count;
    
    return EXIT_SUCCESS;
}