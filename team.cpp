#include<iostream>
using namespace std;
int main(){
    int n,i=0,man=0;
    cin>>n;
    for( ; i < n ; i++ ){
        int count=0;
        for(int j=0 ; j<3 ;j++){
            int k;
            cin>>k;
            if(k==1){
                count++;
            }
        }
        if (count > 1){
            man++;
        }
    }
    cout<<man;
}
