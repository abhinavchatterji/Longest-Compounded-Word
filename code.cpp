#include<bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

#define all(str) str.begin(), str.end()
#define mod 1000000007
#define ll long long

bool comp(string &x,string &y){
    if(x.size()==y.size()) return x<y;
    else return x.size()<y.size();
}
void Solution(){
    vector<string>vec;
    string str;
    unordered_set<string>s;
    while(cin>>str){
        vec.push_back(str);
        s.insert(str);
        
    }
        string temp1,temp2;
        temp1=temp2="";
        
        sort(vec.begin(),vec.end(),comp);
        int sze=vec.size()-1;
        vector<bool>arr(1001);
        while(sze>=0){
          string &m=vec[sze--];
          int t=m.size();
          string temp;
        fill(arr.begin(),arr.end(),false);
          for(int i=0;i<t;i++){
            temp="";
            for(int j=0;j<=i;j++){
                if( s.count(m.substr(j,i-j+1))){
                    if(j==0 && i!=t-1 ){
                        arr[i]=true;
                        break;
                        
                    }
                    else if(j>0 && arr[j-1]){
                        arr[i]=true;
                        break;
                        
                    }
                                
                }
            }
            }
            
            if(arr[t-1]){
                if(temp=="")temp1=m;
                else if(temp2=="")temp2=m;
                else break;
          }
        }
        cout<<"Longest compound word : "<<temp1<<"\n";
        cout<<"Second longest compound word : "<<temp2;



}
int main()
{   ios_base::sync_with_stdio(0); cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a=1,b=1;
    auto start = high_resolution_clock::now();
   
    while(a--)
    { 
    b++;

        Solution();
        cout<<"\n";
    }
   auto stop = high_resolution_clock::now();
   auto duration = duration_cast<milliseconds>(stop - start);
   cout<<"Time taken to process and execute the input file : "<<duration.count()<< " milliseconds";
}