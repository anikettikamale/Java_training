#include<bits/stdc++.h> using namespace std; 
 int main() {     string str;     int len; 
    cout<<"Enter a line:"<<endl;     getline(cin, str);     if(str[0]=='/') {         if(str[1]=='/') { 
            cout<<"The given line is single line comment."<<endl;         } 
        else if(str[1]=='*') {              getline(cin, str);              len=str.size(); 
 
            while(str[len-2]!='*' && str[len-1]!='/' && len!='0') { 
                getline(cin, str);                 len=str.size(); 
            } 
            if(str[len-2]=='*' && str[len-1]=='/')                  cout<<"Given lines are multiple line comment"<<endl;             else 
                cout<<"Given lines are not comment"<<endl; 
        }             else 
                cout<<" Given line is not comment"<<endl; 
    } 
            else 
                cout<<" Given line is not comment"<<endl; 
} 
