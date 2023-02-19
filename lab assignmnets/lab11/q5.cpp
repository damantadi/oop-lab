//wap to count :1.no. of characters  2. no. of words 3.no. of lines 
//4.no. of upper case lower case digit with special symbol

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char ch;
    int word = 1;// First word is not counted as it not counting spaces
    int line = 1;
    int upc = 0, lwc = 0, dig = 0, ss = 0;
    ifstream in("data/file1.txt");
    in.seekg(0,ios::end);
    int len = in.tellg();
    cout << "No. of characters in file: " << len << endl;
    in.seekg(0, ios::beg);
    while(in)
    {
        in.get(ch);
        if(ch == ' ' || ch == '\n')
            word++;
        if(ch == '\n')
            line++;
        if(isupper(ch)) 
            upc++;
        if(islower(ch))
            lwc++;
        if(isdigit(ch))  
            dig++;
    }
    cout << "No. of words: " << word << endl;
    cout << "No. of lines: " << line << endl;
    cout << "No. of Uppercase Characters: " << upc << endl;
    cout << "No. of lowercase Characters: " << lwc << endl;
    cout << "No. of digits: " << dig << endl;
    ss = len - (word - 1) - upc - lwc - dig;
    cout << "No. of special characters: " << ss << endl;
    in.close();
}