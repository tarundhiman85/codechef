//
// Created by Tarun Dhiman on 10-02-2021.
//
#include<bits/stdc++.h>
using namespace std;
string reverseWord(string str){
    int mid=ceil(str.length()/2);
    int last=str.length()-1;
    for(int i=0; i<mid; i++){
        str[i]=str[last-i];
    }
    return str;
    //Your code here
}
int main()
{
    string s="Geeks";
    string g=reverseWord(s);
}
