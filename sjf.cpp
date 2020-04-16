#include<iostream>
#include<iomanip>
using namespace std;
class sjf_alg
{
    int ar[10],exe[10],id[10];
    int n;
    void sort(int *,int *,int *);
public:
    void getdata();
    void display();
    void cal_wt_tt();
};
void sjf_alg::getdata()
{
    cout<<"How many processes to be entered : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter execution time and arrival time of "<<i+1<<" process : ";
        cin>>exe[i]>>ar[i];
        id[i]=i+1;
    }
}
void sjf_alg::display()
{
    cout<<endl<<"Process ID\tExecution time\tArrival Time "<<endl;
    for(int i=0;i<n;i++)
        cout<<setw(5)<<i+1<<setw(15)<<exe[i]<<setw(15)<<ar[i]<<endl;
}
void sjf_alg::sort(int *f,int *m,int *l)
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
void sjf_alg::cal_wt_tt()
{
    int flag=1;
 int at=0,ind,wt,tnt,min,max=exe[0];
 float avg=0,avtnt=0;
 sort(ar,exe,id);
 for(int i=1;i<n;i++)
 {
     if(max<exe[i])
        max=exe[i];
 }
    at=ar[0];
 min=max+1;
 cout<<"\nProcess ID \tWaiting time \tTurn Around time "<<endl;
 while(flag)
 {
        for(int i=0;i<n;i++)
        {
            if(at>=ar[i]&&min>exe[i]&&id[i]!=-1)
      {
          ind=i;
          min=exe[i];
      }
        }
        if(id[ind]==-1)
        {
            at++;
            continue;
        }
     wt=at-ar[ind];
     at+=exe[ind];
     avg+=wt;
     tnt=at-ar[ind];
     avtnt+=tnt;
     cout<<setw(5)<<id[ind]<<setw(15)<<wt<<setw(15)<<tnt<<endl;
     id[ind]=-1;
     min=max+1;
     flag=0;
     for(int k=0;k<n;k++)
            if(id[k]!=-1)
               flag=1;
    }
    avg=avg/(float)n;
    avtnt/=(float)n;
    cout<<"\nAverage Waiting time     : "<<avg;
    cout<<"\nAverage turn Around time : "<<avtnt<<endl;
}
int main()
{
 sjf_alg sjf;
 sjf.getdata();
 sjf.display();
 sjf.cal_wt_tt();
    return 0;
}
