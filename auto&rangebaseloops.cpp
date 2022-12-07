#include<bits/stdc++.h>
using namespace std ;
int main()
{    
     vector<int>v={2,3,4,5}  ;
     vector<pair<int,int>>v1 = {{1,2},{2,3},{5,6}} ; 

  //**range base loops for vector
   for(int value : v)
   {
    cout<<value<<" " ; 
   }
   cout<<endl;

//**for pair
 for(pair<int,int> value : v1)
 {
  cout<<value.first<<" "<<value.second<<endl;
 }


 //**using auto keyword for iterator|
 for(auto it = v.begin() ; it!=v.end() ; it++)
 {
  cout<<(*it)<<" " ; 
 }
 cout<<endl;
 
 //**using auto keyword for range base loops
 for(auto value : v1) 
 {
  cout<<value.first<<" "<<value.second <<endl;
 }



return 0 ;
}
