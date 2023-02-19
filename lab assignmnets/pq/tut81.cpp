#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s1;
    ifstream read("tut81.txt");
    read >> s1;
    getline(read, s1);
    cout << s1 << endl;
    getline(read, s1);
    cout << s1 << endl;
    getline(read, s1);
    cout << s1 << endl;
    getline(read, s1);
    cout << s1 << endl;
    getline(read, s1);
    cout << s1 << endl;
    getline(read, s1);
    cout << s1 << endl;
    getline(read, s1);
    cout << s1 << endl;
    getline(read, s1);
    cout << s1 << endl;
    getline(read, s1);
    cout << s1 << endl;


    string s = "give me all the money!!!!";
    ofstream write("tut81a.txt");
    write << s;
    return 0;
}