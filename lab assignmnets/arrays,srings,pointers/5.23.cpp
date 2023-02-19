#include<iostream>
using namespace std;
#define N 1
int main(){
    int stud[N][3];
    for(int i=0;i<N;i++)
    {
        cout<<"marks of student "<<i+1<<" is :";
        for(int j=0;j<3;j++)
        {
            cin>>stud[i][j];
        }
    }
    int total[N]={0};
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<3;j++)
        {
            total[i]+=stud[i][j];
        }
    }
    float avg[N]={0};
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<3;j++)
        {
            avg[i]+=stud[i][j];
        }
        avg[i]=avg[i]/3;
    }
    cout<<"STUD NO   MARKS     TOTAL  AVERAGE"<<endl;
    for(int i=0;i<N;i++)
    {
        cout<<i+1<<"        "<<stud[i][0]<<" "<<stud[i][1]<<" "<<stud[i][2] <<"     "<<total[i]<<"    "<<avg[i]<<endl;
  }


    return 0;
}