//Left Recurtion

#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
	string s,a="",b="";
	cout<<"Enter Produntion: ";cin>>s;
	int n = s.size();
	cout<<"New Productions"<<endl;
    char start = s[0];
    b.push_back(s[0]);
    b.push_back(s[1]);
    b.push_back(s[2]);
    a.push_back(start);
    a +="'->e/";
    for(int i=3;i<n;i++){
        if(s[i]==start){
            i++;
            while(i<n && s[i]!='/'){
                a.push_back(s[i]);
                i++;
            }
            b.push_back(s[i]);
            a.push_back(start);
            a +="'/";
        }else{
            while(i<n && s[i]!='/'){
                b.push_back(s[i]);
                i++;
            }
            b.push_back(start);
            b +="'/";
        }
    }
    cout<<b<<"\n"<<a<<endl;

    return 0;
}