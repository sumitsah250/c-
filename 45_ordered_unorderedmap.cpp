#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;
  //pair insertion type
    pair<String,int> p= make_pair("sumit",1);
    m.insert(p);

    pair<string,int> p2("aadi",3);
    m.insert(p2);
    
    m["sumit"]=2;
    //pair insertion type


    //searching
    cout<< m["sumit"]<<endl;
    return 0;
}