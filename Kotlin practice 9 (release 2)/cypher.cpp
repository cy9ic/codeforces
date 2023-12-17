#include <iostream>
using namespace std;

int main(){

int n;
cin>>n;

char arr[n];

for(int i = 0 ; i < n ; i++){
    cin>>arr[i];
}
int windowsize = 1;

int prev = 0;
char store ;
string result = "";
for(int i = 0 ; i <  n ; i++){
    if(windowsize==prev){
        windowsize+=1;
        result+=store;            
        prev = 0;
    }

store = arr[i];
    prev++;
}
result+=store;

cout<<result;
return 0;

}