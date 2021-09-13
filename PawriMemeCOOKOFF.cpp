#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256

void findAllOccurances(std::vector<size_t> & vec, string data, string toSearch)
{
    // Get the first occurrence
    size_t pos = data.find(toSearch);
    // Repeat till end is reached
    while( pos != std::string::npos)
    {
        // Add position to the vector
        vec.push_back(pos);
        // Get the next occurrence from the current position
        pos =data.find(toSearch, pos + toSearch.size());
    }
}
void replaceAll( string &s, const string &search, const string &replace ) {
    for( size_t pos = 0; ; pos += replace.length() ) {
        // Locate the substring to replace
        pos = s.find( search, pos );
        if( pos == string::npos ) break;
        // Replace by erasing and inserting
        s.erase( pos, search.length() );
        s.insert( pos, replace );
    }
}
int main()
{
    int t;
    cin>>t;
    string s;
    string s1="party";
    string s2="pawry";
    while(t--){
        cin>>s;
        if(s.length()<5){
            cout<<s<<"\n";
        }
        else {
//        vector<std::size_t> v;
//        vector<std::size_t> v1;
            replaceAll(s, s1, s2);
            cout << s << "\n";
        }
//        findAllOccurances(v,s,s1);
//        findAllOccurances(v1, s, s2);
//        if(v.size()==0){
//            if (v1.size()==0){
//                cout<<s<<"\n";
//            }
//            else{
//                //for v1
//                for(size_t pos : v1){
//                    int p=int(pos);
//                    s.replace((int)p,(int)p+5,s2);
//                }
//                cout<<s<<"\n";
//            }
//        }
//        else{
//            for(size_t pos : v){
//                int p=int(pos);
//                s.replace((int)p,(int)p+5,s2);
//            }
//            cout<<s<<"\n";
//        }
    }
    return 0;
}