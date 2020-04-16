#include<iostream>
#include<iomanip>
using namespace std;
class fcfs_alg
{
    int ar[10],exe[10],id[10];
    int n;
    void sort(int *,int *,int *);
public:
    void getdata();
    void display();
    void cal_wt_tt();
};
void fcfs_alg::getdata()
{
    cout<<"How many process to be entered : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter brust time and arrival time of process "<<i+1<<" : ";
        cin>>exe[i]>>ar[i];
        id[i]=i+1;
    }
}
void fcfs_alg::display()
{
    cout<<endl<<"Process ID\tbrust  time\tArrival Time "<<endl;
    for(int i=0;i<n;i++)
        cout<<setw(5)<<i+1<<setw(15)<<exe[i]<<setw(15)<<ar[i]<<endl;
}
void fcfs_alg::sort(int *f,int *m,int *l)
{
    int temp;
    for(int y=0;y<n-1;y++)
    {
        for(int z=0;z<n-1;z++)
            if(f[z]>f[z+1])
            {
                temp=f[z];
                f[z]=f[z+1];
                f[z+1]=temp;
                temp=l[z];
                l[z]=l[z+1];
                l[z+1]=temp;
                temp=m[z];
                m[z]=m[z+1];
                m[z+1]=temp;
            }
    }
}
void fcfs_alg::cal_wt_tt()
{
    int wt,tnt,temp;
 float avg=0,avtnt=0;
    sort(ar,exe,id);
    temp=ar[0];
    cout<<"\nProcess id \tWaiting time \tTurn around time "<<endl;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>temp)
        {
            wt=0;
            temp=ar[i];
        }
        else
            wt=temp-ar[i];
        avg+=wt;
        temp+=exe[i];
        tnt=temp-ar[i];
        avtnt+=tnt;
        cout<<setw(5)<<id[i]<<setw(15)<<wt<<setw(15)<<tnt<<endl;
    }
    avg=avg/(float)n;
    avtnt/=(float)n;
    cout<<"\nAverage Waiting time     : "<<avg;
    cout<<"\nAverage turn Around time : "<<avtnt<<endl;
}
int main()
{
 fcfs_alg fcfs;
 fcfs.getdata();
 fcfs.display();
 fcfs.cal_wt_tt();
    return 0;
}
