#include <iostream>
using namespace std;

int main(){
    int t ;
    cin>>t;

    while(t>0){

int n ;
cin>>n;

int arr[n];

for(int i = 0 ; i < n ; i ++){
    cin>>arr[i];
}


int store = arr[0];
int count = 0;
for(int i = 1;i<n;i++){
    if(arr[i]==store){
        count++;
    }
}

if(count==0){

    cout<<0<<endl;
}else{
    for(int i = 0 ; i < n;i++){
        if(arr[i]!=store){
            cout<<i+1<<endl;
            break;
        }
    }
}


        t--;
    }

return 0;

}