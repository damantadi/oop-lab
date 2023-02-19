#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string abc = "afvs adgw fewwv";
    cout << abc << endl;
    string h = "sdgrg the wgrw";
    h.clear();
    cout << h << endl;
    cout << "-------------------" << endl;

    cout << "now comparing strings:" << endl;
    string s1 = "abc";
    string s2 = "afs";
    cout << s2.compare(s1) << endl;
    cout << "-------------------" << endl;

    string a = "xcfg";
    a.clear();
    if (a.empty())
        cout << "string is empty" << endl;
    cout << "-------------------" << endl;

    string g = "xcf";
    if (g.empty())
        cout << "string is empty" << endl;
    if (!g.empty())
        cout << "string is not empty" << endl;
    cout << "-------------------" << endl;

    string w = "battelground";
    cout << w << endl;
    w.erase(4, 3);
    cout << w << endl;
    cout << "-------------------" << endl;

    string p = "battelground";
    cout << p << endl;
    cout << "finding a string  " << p.find("grou") << endl;
    cout << "inserting string in string  " << p.insert(6, "pubg") << endl;
    cout << "-------------------" << endl;

    string s4 = "3456";
    cout << "not converted to integer " << s4 + "44" << endl;
    int x = stoi(s4);
    cout << "string to integer " << x + 44 << endl;
    int y = 4568;
    cout << "integer to string " << to_string(y) + "4" << endl;
    cout << "-------------------" << endl;

    string s6 = "zxcvbnml kjhgfdsa qwertyuiop";
    sort(s6.begin(), s6.end());
    cout << "shorting string : " << s6 << endl;
    cout << "-------------------" << endl;

    return 0;
}