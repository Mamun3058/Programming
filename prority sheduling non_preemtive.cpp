#include<iostream>
#include<iomanip>
using namespace std;
class priority_alg
{
    int pr[10],id[10],exe[10],ar[10];
    int n;
    void sort(int*,int*,int*,int *);
public:
    void getdata();
    void display();
    void cal_wt_tt();
};
void priority_alg::getdata()
{
    cout<<"How many process to be entered : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter execution,arrival time and priority of "<<i+1<<" process : ";
        cin>>exe[i]>>ar[i]>>pr[i];
        id[i]=i+1;
    }
}
void priority_alg::display()
{
    cout<<endl<<"Process ID\tExecution time\tArrival Time \tPriority "<<endl;
    for(int i=0;i<n;i++)
        cout<<setw(5)<<id[i]<<setw(15)<<exe[i]<<setw(15)<<ar[i]<<setw(15)<<pr[i]<<endl;
}
void priority_alg::sort(int *f,int *mid,int *last,int *ll)
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
                temp=mid[z];
                mid[z]=mid[z+1];
                mid[z+1]=temp;
                temp=last[z];
                last[z]=last[z+1];
                last[z+1]=temp;
                temp=ll[z];
                ll[z]=ll[z+1];
                ll[z+1]=temp;
            }
    }
}
void priority_alg::cal_wt_tt()
{
 int flag=1;
 int at=0,ind,wt,tnt,min,max=pr[0];
 float avg=0,avtnt=0;
 sort(ar,id,exe,pr);
 at=ar[0];
 sort(pr,id,exe,ar);
 for(int i=1;i<n;i++)
     if(max<pr[i])
        max=pr[i];
    min=max+1;
 cout<<"\nProcess ID \tWaiting time \tTurn Around time "<<endl;
 while(flag)
 {
        for(int i=0;i<n;i++)
        {
            if(at>=ar[i]&&min>pr[i]&&id[i]>0)
      {
          ind=i;
          min=pr[i];
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
 priority_alg priority;
 priority.getdata();
 priority.display();
 priority.cal_wt_tt();
    return 0;
}
