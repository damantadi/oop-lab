#include <iostream>
#include <cstring>
using namespace std;
class TG
{
protected:
    string title;
    float rate;

public:
    void get(string c, float r)
    {
        title = c;
        rate = r;
    }
    virtual void set()
    {
     cout<<"fy"<<endl;   
    }
};
class TG_Shorts : public TG
{
    float length;

public:
    void set(string k, float r, float l)
    {
        title = k;
        rate = r;
        length = l;
    }
    void display()
    {
        cout << "Title of video is " << title << endl;
        cout << "rating of video is " << rate << endl;
        cout << "length of video is " << length << " minutes" << endl;
    }
};
class TG_channels : public TG
{
    int channels;

public:
    void set(string k, float r, int n)
    {
        title = k;
        rate = r;
        channels = n;
    }
    void display()
    {
        cout << "title of channel is " << title << endl;
        cout << "rating of channel is " << rate << endl;
        cout << "no of chanels are is " << channels << endl;
    }
};
int main()
{
    string title;
    float rating, length;
    int channels;
    title = "TG SHORTS";
    rating = 4.5;
    length = 12.33;
    TG_Shorts m;
    m.set(title, rating, length);
    m.display();
    title = "TG CHANNEL";
    rating = 5.0;
    channels = 12;
    TG_channels k;
    k.set(title, rating, channels);
    k.display();

    return 0;
}