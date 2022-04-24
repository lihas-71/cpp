#include<iostream>
using namespace std;

int find_max_score(){
    int n,i,max_score,idx;
    cin>>n;
    int a[200000+1];
    int scores[200000+1];

    for(i=1;i<=n;i++){
        cin>>a[i];
        scores[i] = 0;
    }

    max_score = -1;
    for(i=n;i>=1;i--){
        idx = i;


        do{
            if(idx>i){
                scores[i] += scores[idx];
                break;
            }
            scores[i] += a[idx];
            idx += a[idx];

        }while(idx<=n);

    }

    for(i=1;i<=n;i++)
        if(scores[i]>max_score) max_score = scores[i];
    
    return max_score;
}

int main(){
    int t;
    int result[10000];

    cin>>t;

    for(int i=0;i<t;i++)
        result[i]=find_max_score();
    
    for(int i=0;i<t;i++)
        cout<<result[i]<<endl;

    return EXIT_SUCCESS;

}