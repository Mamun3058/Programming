#include<iostream>
#include<iomanip>
using namespace std;
class rr_alg
{
    int ar[10],id[10],exe[10];
    int n,q;
    void sort(int *f,int *mid,int *last);
public:
    void getdata();
    void display();
    void cal_wt_tt();
};
void rr_alg::getdata()
{
    cout<<"How many process to be entered : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter execution time and arrival time of process "<<i+1<<" : ";
        cin>>exe[i]>>ar[i];
        id[i]=i+1;
    }
    cout<<"Enter Quantum slice : ";
 cin>>q;
}
void rr_alg::display()
{
    cout<<endl<<"Process ID\tExecution time\tArrival Time "<<endl;
    for(int i=0;i<n;i++)
        cout<<setw(5)<<i+1<<setw(15)<<exe[i]<<setw(15)<<ar[i]<<endl;
}
void rr_alg::sort(int *f,int *mid,int *last)
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
            }
    }
}

void rr_alg::cal_wt_tt()
{
    int exe2[10],flag=1,flag1=0;
 int at=0,wt,tnt;
 float avg=0,avtnt=0;
 sort(ar,id,exe);
 for(int i=0;i<n;i++)
     exe2[i]=exe[i];
    at=ar[0];
 cout<<"\nProcess ID \tWaiting time \tTurn Around time "<<endl;
 while(flag)
    {
        for(int i=0;i<n;i++)
        {
            if(at<ar[i]||id[i]<0)
                continue;
            flag1=1;
      at+=q;
      exe[i]-=q;
         if(exe[i]<=0)
         {
             at+=exe[i];
             wt=at-exe2[i]-ar[i];
          tnt=at-ar[i];
          cout<<setw(5)<<id[i]<<setw(15)<<wt<<setw(15)<<tnt<<endl;
          id[i]=-1;
          avg+=wt;
          avtnt+=tnt;
         }
        }
        if(flag1==0)
            at++;
        flag1=flag=0;
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
 rr_alg rr;
 rr.getdata();
 rr.display();
 rr.cal_wt_tt();
    return 0;
}
