#include <iostream>
#include <set>
#include<unordered_map>

using namespace std;
int main(){
   unordered_map<int,int> m;
    m[1] +=3;
    m[2] +=6;
    m[1] +=9;
    m[2] +=12;
    for(auto val:m){
        cout<<val.first<<" "<<val.second<<endl;
    }
}