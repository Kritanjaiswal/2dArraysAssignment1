#include<iostream>
#include<climits>
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
    int test=0,idx=0,sum;
    for(int i=0; i<m; i++){
        sum=0;
        for(int j=0; j<n; j++){
            sum+=arr[i][j];
        }
        if(sum>test) {
            test=sum;
            idx=i;
        }
    }
    cout<<idx;
}