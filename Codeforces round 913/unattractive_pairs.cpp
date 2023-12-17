#include <bits/stdc++.h>
using namespace std;
string erased (string s,int start){
string resultant =    s.erase(start , start+1);
        return resultant;
}

int adjacent(string s ){
    for(int i = 0 ; i<s.length()-1 ;i++){
        if(s[i]!=s[i+1]){
            return i;
        }
    }
    return -1;

}

int main(){
int t;
cin>>t;

while(t>0){

    int size;
    cin>>size;
    string s ;
    cin>>s;
    
    int min_size = INT_MAX;
int i = 0;
        while(adjacent(s)!=-1 && s.size()>0){
            s.erase(adjacent(s),2);
            i++;
        }
        

    
    cout<<i<<" "<<s.size()<<endl;
    t--;

}

return 0;

}