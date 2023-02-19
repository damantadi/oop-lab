#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s1;
    ifstream read("tut82.txt");
    read >>s1;
    getline(read,s1);
    cout << s1<<endl;
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
    read.close();

    string s = " a give me all the money!!!!";
    ofstream write("tut82.txt");
    write <<s;
    write.close();
    return 0;
}