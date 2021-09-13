// //https://www.geeksforgeeks.org/stdstring-class-in-c/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t,k;
//     int n;
//     string str;
//     //cin>>t;
//     t=1;
//     while(t--)
//     {
//     //cin>>n>>k;
//     n=9;
//     k=10;
//     str="MIM_XII:M";
//     //getline(cin, str);
//     //two pointer MG and IR
//     string::iterator MG;
//     string::iterator IR;
//     MG=str.begin();
//     IR=str.begin();
//     int s=0;
//     while(IR!=str.end() || MG!=str.end()){
//         // if(*IR=='I' || *MG=='M'){
//         //  if(*MG==':' || *IR==':'){
//         //      s++;
//         //  }
//         if(*IR!='I'){
//             IR++;
//         }
//         if(*MG!='M'){
//             MG++;
//         } 
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t,k;
//     int n;
//     string str;
//     //cin>>t;
//     t=1;
//     while(t--)
//     {
//     //cin>>n>>k;
//     n=9;
//     k=10;
//     str="MIM_XII:M";
//     //getline(cin, str);
//     //two pointer MG and IR
//     int u=str.length();
//     char char_ar[u + 1];
//     strcpy(char_ar, str.c_str());
//     char *MG=char_ar;
//     int s=0;
//     char *IR=char_ar;
//     while(*MG!='\0' || *IR!='\0'){
//       if(MG=="I" || IR=="M"){
//       if(MG==":" || IR==":"){
//         s++;
//       }
//     }
//     if(IR!="I")
//        {
//             IR++;
//        }
//     if(MG!="M")
//         {
//             MG++;
//         } 
// }
// }
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t,k;
//     int n;
//     string str;
//     //cin>>t;
//     t=1;
//     while(t--)
//     {
//     //cin>>n>>k;
//     n=9;
//     k=10;
//     //str="I:::M";
//     str="MIM_XII:M";
//     //getline(cin, str);
//     //two pointer MG and IR
//     string::iterator MG;
//     string::iterator IR;
//     MG=str.begin();
//     IR=str.begin();
//     int s=0;
//     int count=0;
//     while(IR!=str.end() || *MG!=str.end())
//     {
//      while(*IR!='I' && *MG!='M'){ //|| MG!=str.end()){
//         //IR++;
//         //MG++;
//         if((*IR=='I' || *MG=='M')&&(*IR!='X' || *MG!='X')){
//           if(*MG==':' || *IR==':'){
//               s++;  //conducting sheets
//           }
//         if(*IR=='X' || *MG=='X'){
//             if(*IR=='X'){
//              MG=IR;   //MG pointer points to IR pointer address
//             }
//             else{
//              IR=MG;   //else IR pointer points to MG pointer address
//             }
//         }  
//         count++;
//         // }
//         if(*IR!='I'){
//             IR++;
//         }
//         if(*MG!='M'){
//             MG++;
//         }
        
//     }
//   }
//   int ans=0;
//   int p=0;
//    p=k+1-abs(IR-MG)-s;
//   if (p<0){
//   continue;
//   }
//   else if(p>0)
//   {
//       ans++;
//       //now move ahead
//   }
// }
// }
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t,k;
//     int n;
//     string str;
//     //cin>>t;
//     t=1;
//     while(t--)
//     {
//     //cin>>n>>k;
//     n=9;
//     k=10;
//     str="I:::M";
//     //str="MIM_XII:M";
//     //getline(cin, str);
//     //two pointer MG and IR
//     string::iterator MG;
//     string::iterator IR;
//     MG=str.begin();
//     IR=str.begin();
//     int s=0;
//     int count=0;
//      while(*IR!='I' || *MG!='M'){ //|| MG!=str.end()){
//         //IR++;
//         //MG++;
//         if(*IR=='I' || *MG=='M'){
//           if(*MG==':' || *IR==':'){
//               s++;
//           }
//         count++;
//         // }
//         if(*IR!='I'){
//             IR++;
//         }
//         if(*MG!='M'){
//             MG++;
//         }
        
    
//     }
// }}}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,k;
    int n;
    int p=0;
    int ans=0;
    string str;
    //cin>>t;
    t=1;
    while(t--)
    {
    //cin>>n>>k;
    n=6;
    k=10;
    //str="I:::M";
    str="I::::M";
    //getline(cin, str);
    //two pointer MG and IR
    string::iterator MG;
    string::iterator IR;
    MG=str.begin();
    IR=str.begin();
    int s=0;
    int M=0;
    int N=0;
    int I=0;
    int i=0;
    int count=0;
    int y=0;
   // while(IR!=str.end() || MG!=str.end())  lets create explict call
   //while(M<n && I<n)
   //{
     do{ //|| MG!=str.end()){
        //IR++;
        //MG++;
        if((*IR=='I' || *MG=='M')&&(*IR!='X' || *MG!='X')){
          if(*MG==':' || *IR==':'){
              s++;  //conducting sheets
          }
        }
          //if(count<5){
        if(*IR=='X' || *MG=='X'){
            if(*IR=='X'){
             MG=IR;   //MG pointer points to IR pointer address
             M=I;
             MG++;
             IR++;
             M++;
             I++;
            }
            else{
             IR=MG;   //else IR pointer points to MG pointer address
             I=M;
             MG++;
             IR++;
             M++;
             I++;
            }
        }
        else{
        if(*IR!='I'){
            IR++;
            I++;
        }
        if(*MG!='M'){
            MG++;
            M++;
        }
        }
  }while((*IR!='I' && *MG!='M'));
   if(*IR=='I' && *MG=='M'){
   p=k+1-abs(IR-MG)-s;
  if (p<0){
  if(IR<MG){

  }
  else if(MG>IR){
   
  }
  }

  else if(p>0)
  {
      ans++;
      //now move ahead
      MG++;
      IR++;
      M++;
      I++;
  }
}
 // y++;
   //}
    }}
