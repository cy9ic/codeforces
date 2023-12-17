#include <bits/stdc++.h>
using namespace std;

bool decreasing_sort(int a , int b){
    if(a>b){
        return true;
    }
    return false;
}

int main(){

int n ;
cin>>n;

vector<int> arr;

for(int i = 0 ; i<n; i++){
int temp;
cin>>temp;
    arr.push_back(temp);
}

sort(arr.begin(),arr.end());
int i = 0 ;
while(i<arr.size()){
    int store = arr[i];
    int count = 0;
    while(i<arr.size() && arr[i]==store){
        count++;
        i++;
    }
    if(count>2){
        cout<<"NO";
        return 0;

    }
    count = 0;
}
vector<int> increasing;
vector<int> decreasing;
// 1 3 3 4 5
cout<<"YES"<<endl;

for(int i = 0 ; i<arr.size() ; i++){
    if(arr[i]==arr[i+1]){
        decreasing.push_back(arr[i]);
        increasing.push_back(arr[i]);
    
        i++;
    }else{
        increasing.push_back(arr[i]);
    }
    
}

cout<<decreasing.size()<<endl;
for(int i = 0 ; i< decreasing.size() ;i++){
    cout<<decreasing[i]<<" ";
}

cout<<endl;

cout<<increasing.size()<<endl;
sort(increasing.begin() , increasing.end(),decreasing_sort);

for(int i = 0 ; i< increasing.size() ;i++){
    cout<<increasing[i]<<" ";
}

return 0;

}

// 7
// 7 2 7 3 3 1 4
// 1 2 3 3 4 7 7