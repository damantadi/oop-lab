#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string s;
    //write in the txt file
    string s1 = "all good";
    ofstream write("tut80a.txt");
    write << s1;
    //read from the txt file
    ifstream get("tut80.txt");
    get >> s;
    getline(get, s);
    cout << s;
    getline(get, s);
    cout << s;

    return 0;
}