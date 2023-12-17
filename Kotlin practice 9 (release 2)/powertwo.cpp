#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int count_setbits(int N)
{ 
   int cnt=0;

   while(N>0)
   {
       cnt+=(N&1);
       N=N>>1;
   }

   return cnt;
}

int main(){

int n ;
int k ;
cin>>n>>k;

int possible = count_setbits(n);

if(possible>k || n<k){
cout<<"NO";
return 0;
}

cout<<"YES"<<endl;
vector<int> resultant(k,1);

n-=k;
int index = 0;
while(n!=0){
    if(index==k){
        index = 0;
    }
   if(n>0){
    int prev = resultant[index];
    resultant[index]*=2;
    n-=resultant[index]-prev;
    index++;
   }
   else if(n<0){
    
    int prev = resultant[index];
    resultant[index]/=2;
    n+=prev-resultant[index];
    index--;
   }
   
}
sort(resultant.begin(),resultant.end());
for(int i = 0 ; i < resultant.size() ; i++){
    cout<<resultant[i]<<" ";
}



return 0;

}