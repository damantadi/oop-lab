//wap to write 10 strings into a file and display them from file
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream file("file2.txt", ios::out);

    file << "This is first sentence.\n";
    file << "This is the second sentence.\n";
    file << "This is the third sentence.\n";
    file << "This is the fourth sentence.\n";
    file << "This is the fifth sentence.\n";
    file << "This is the sixth sentence.\n";
    file << "This is the seventh sentence.\n";
    file << "This is the eigth sentence.\n";
    file << "This is the ninth sentence.\n";
    file << "This is the tenth sentence.\n";

    file.close();
    
    ifstream in;
    char data[100];
    in.open("file2.txt");
    while(in)
    {
        in.getline(data,40);
        cout << data << endl;
    }

    in.close();
    return 0;
}
