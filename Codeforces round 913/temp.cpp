#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> pr , pair<int,int> pr2){
    if(pr.first>pr2.first){
        return true;
    }
return false;

}
int main(){

int weight[] = {10,20,30};
int values[] = {60,100,120};

int n = 3;

vector<pair<int,int>> v1;

for(int i = 0 ; i < n; i++){
    v1.push_back(make_pair(values[i]/weight[i],i));
}




sort(v1.begin(),v1.end(),compare);

for(int i = 0 ; i<v1.size() ; i++){
    cout<<v1[i].first<<" ";
    cout<<v1[i].second;
    cout<<endl;
}


double answer = 0;
int remaining = 50;
for(int i = 0; i<v1.size() ; i++){

    cout<<remaining<<" "<<endl;
    if(weight[v1[i].second]>remaining){
        answer+=remaining*v1[i].first;
        break;
    }
    else{
        remaining-=weight[v1[i].second];
        
        answer+=v1[i].first*weight[v1[i].second];
    }
}
cout<<remaining<<" ";

float a = (double)10/(double)3;
cout<<"dasd"<<a<<endl;
cout<<answer;
return 0;

}