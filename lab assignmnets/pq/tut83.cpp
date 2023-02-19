#include <iostream>
#include <string>

using namespace std;

int main()
{
    string o = "fbas adg asf";
    cout << o << endl;
    cout << o[6] << endl;

    cout << "_x_x_X_X_x_x_x_" << endl;

    string h;
    cin >> h;
    cout << h << endl;

    cout << "_x_x_X_X_x_x_x_" << endl;

    string k;
    getline(cin, k);
    cout << "can able to print with space  " << k << endl;

    cout << "_x_x_X_X_x_x_x_" << endl;

    cout << "adding string" << endl;
    string m = "total ";
    string l = "dhamaal";
    m.append(l);
    cout << m << endl;
    //cout<<"can also be done by "<<m+l<<endl;

    return 0;
}