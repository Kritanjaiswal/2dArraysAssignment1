#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int l1=1,r1=0,l2=0,r2=3,sum=0;
    if(l2>l1){
        for(int i=l1; i<=l2; i++){
            for(int j=r1; j<=r2; j++){
                sum+=arr[i][j];
            }
        }
    }else{
        for(int i=l2; i<=l1; i++){
            for(int j=r1; j<=r2; j++){
                sum+=arr[i][j];
            }
        }
    }
    cout<<sum;
}