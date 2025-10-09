#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin,s);

    int u=0,l=0,d=0,w=0,sp=0;

    for(char c:s){
        if(c>=65&&c<=90) u++;
        else if(c>=97&&c<=122) l++;
        else if(c>=48&&c<=57) d++;
        else if(c==32||c==9) w++;
        else sp++;
    }

    cout<<u<<" "<<l<<" "<<d<<" "<<w<<" "<<sp<<endl;
    return 0;
}
