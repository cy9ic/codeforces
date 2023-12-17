#include <bits/stdc++.h>
using namespace std;

int remove_smaller(string s){

    int i = s.length()-1;
    while(i>=0 && (( s[i]>='A' && s[i]<='Z') ||  s[i]=='0')){
        i--;
    }
    
    
    return i;
    
}

int remove_larger(string s){

    int i = s.length()-1;
    while(i>=0 &&  ((s[i]>='a' && s[i]<='z') || s[i]=='0')){
        i--;
    }


    return i;
    
}


int main(){

int t;
cin>>t;


while(t>0){
    string s;
    cin>>s;

    int i = 0;
    string result ="";

    while(i<s.length()){

        if(s[i]=='b'){
            
            int  digit = remove_smaller(result);
            if(digit>=0){
                result[digit] = '0';
            }
        }else if(s[i]=='B'){
           int  digit = remove_larger(result);
            if(digit>=0){
                result[digit] = '0';
            }

        }else{ 
           result+=s[i];
        }   

        i++;
    }
    string res = "";
    for(int i = 0 ; i<result.length() ; i++){
        if(result[i]!='0'){
            res+=result[i];
        }
    }

    cout<<res<<endl;
    

    t--;
}
return 0;

}