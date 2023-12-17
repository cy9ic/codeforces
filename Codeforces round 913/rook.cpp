#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t>0){

string s;
cin>>s;

    
    int dig = s[1]-48;

for(int i = 0 ; i < 8 ; i++){
    
    if(i+1!=dig){
        string temp = "";
        temp+=s[0];
        temp+=i+48+1;
        cout<<temp<<endl;
    }
}
char store = s[0];
char start = 'a';

for(int i  = 0 ; i<8 ; i++){
    if(start!=store){
        string temp = "";
        temp+=start;
        temp+=dig+48;
        cout<<temp<<endl;

    }
    start+=1;
}

    t--;
}
return 0;

}