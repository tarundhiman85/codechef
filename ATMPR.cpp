#include <iostream>
using namespace std;
//learned precison
int main() {
	int x;
	float y;
	cin>>x>>y;
	if(x%5==0 && (x+0.5)<=y)
	    cout<<(y-x-0.5);
    else
	    cout<<y;
	return 0;
}