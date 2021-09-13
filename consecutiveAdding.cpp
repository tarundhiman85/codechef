#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;

bool func(vector<vector<ll>> &a1,vector<vector<ll>> &a2, ll elem, ll row, ll col)
{
    if (elem > row) {
        for (ll j = 0; j < row; j++) {
            for (ll i = 0; i < (col - elem + 1); i++) {
                if (a1[j][i] != a2[j][i]) {
                    ll diff = a2[j][i] - a1[j][i];

                    for (ll k = i; k < (i + elem); k++) {
                        a1[j][k] += diff;
                    }
                }
                if (i == col - elem) {
                    for (ll k = (col - elem + 1); k < col; k++)
                    {
                        if (a1[j][k] != a2[j][k]) return false;
                    }
                }
            }
        }
    } else if (elem > col) {

        for (ll j = 0; j < col; j++) {
            for (ll i = 0; i < (row - elem + 1); i++) {
                if (a1[i][j] != a2[i][j]) {
                    ll diff = a2[i][j] - a1[i][j];

                    for (ll k = i; k < (i + elem); k++) {
                        a1[k][j] += diff;
                    }
                }
                if (i == row - elem) {
                    for (ll k = (row - elem + 1); k < row; k++)
                    {
                        if (a1[k][j] != a2[k][j]) return false;
                    }
                }
            }
        }
    }
    else {
        for (ll j = 0; j < row; j++) {
            for (ll i = 0; i < (col - elem + 1); i++) {
                if (a1[j][i] != a2[j][i]) {
                    ll diff = a2[j][i] - a1[j][i];

                    for (ll k = i; k < (i + elem); k++) {
                        a1[j][k] += diff;
                    }
                }
            }
        }
        for (ll j = 0; j < col; j++) {
            for (ll i = 0; i < (row - elem + 1); i++) {
                if (a1[i][j] != a2[i][j]) {
                    ll diff = a2[i][j] - a1[i][j];

                    for (ll k = i; k < (i + elem); k++) {
                        a1[k][j] += diff;
                    }
                }
                if (i == row - elem) {
                    for (ll k = (row - elem + 1); k < row; k++)
                    {
                        if (a1[k][j] != a2[k][j]) return false;
                    }
                }
            }
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    ll row,col,elem;
    while(t--) {
        cin >> row >> col >> elem;

        vector<vector<ll>> a1(row);
        vector<vector<ll>> a2(col);


        for (ll i = 0; i < row; i++) {
            a1[i].resize(col);
            for (ll j = 0; j < col; j++) {
                cin >> a1[i][j];
            }
        }
        for (ll i = 0; i < row; i++) {
            a2[i].resize(col);
            for (ll j = 0; j < col; j++) {
                cin >> a2[i][j];
            }
        }
        if (!func(a1, a2, elem, row, col)) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    }
    return 0;
}