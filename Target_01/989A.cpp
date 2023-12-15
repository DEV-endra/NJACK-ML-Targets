#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    int l=s.length();

    int count=0;

    for(int i=1;i<l-1;i++){

        if(s[i]=='A'){
            if(((s[i-1]=='B')&&(s[i+1]=='C'))||((s[i-1]=='C')&&(s[i+1]=='B'))){
                cout << "YES"<<endl;
                count++;
                break;

            }
        }
        else if(s[i]=='B'){
            if(((s[i-1]=='C')&&(s[i+1]=='A'))||((s[i-1]=='A')&&(s[i+1]=='C'))){
                cout << "YES"<<endl;
                count++;
                break;

            }
        }
         else if(s[i]=='C'){
            if(((s[i-1]=='B')&&(s[i+1]=='A'))||((s[i-1]=='A')&&(s[i+1]=='B'))){
                cout << "YES";
                count++;
                break;

            }
        }
        
    }
    if(count==0){
        cout << "NO"<<endl;
    }



}