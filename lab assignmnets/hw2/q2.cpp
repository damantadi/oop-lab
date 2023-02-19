//static and unstatic datamembers
#include <iostream>
using namespace std;
class sum
{
    static int num;
    int count;

public:
    void setdata(int l)
    {
        count = l;
        num++;
    }
    void getdata()
    {
        cout << "the value of num is " << num << "and count is " << count << endl;
    }
};
int sum::num;
int main()
{
    sum s1, s2, s3;

    s1.setdata(10);
    s1.getdata();

    s2.setdata(3);
    s2.getdata();

    s3.setdata(50);
    s3.getdata();
  
    s1.getdata();
    s2.getdata();
    s3.getdata();
    return 0;
}