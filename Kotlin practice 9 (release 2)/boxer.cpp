#include <bits/stdc++.h>


using namespace std;


int main(){

int n;
cin>>n;
vector<int> arr;

for(int i = 0 ; i < n ; i ++){
    int temp ;
    cin>> temp;
    arr.push_back(temp);
}

sort(arr.begin() , arr.end());
set<int> sett;

for(int i = arr.size()-1; i>=0 ; i--){
    
    if(sett.find(arr[i]+1)==sett.end() && arr[i]+1<=150001){
        sett.insert(arr[i]+1);
        arr[i]+=1;
    }else if(sett.find(arr[i])==sett.end()){
        sett.insert(arr[i]);
    }
    else if(sett.find(arr[i]-1)==sett.end() && arr[i]-1>0){
        sett.insert(arr[i]-1);
        arr[i]-=1;
    }

}




cout<<sett.size();

return 0;

}