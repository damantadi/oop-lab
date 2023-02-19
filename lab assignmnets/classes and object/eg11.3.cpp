#include<iostream>
using namespace std;
class s
{
    int n;
    public:
    s()
    {
        n=0;
    }
    s(int k)
    {
        n=k;
    }
    void show()
    {
        cout<<n<<endl;
    }
    friend s operator-(s s1);
};
s operator -(s s1)
{   
    s1.n=-s1.n;
return s1;
}
int main(){
    s s1(3);
    s1.show();
    s s3;
    s3=-s1;
    s3.show();
    return 0;
}