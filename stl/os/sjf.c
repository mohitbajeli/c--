#include<stdio.h>
#include<stdbool.h>
#include<limits.h>

struct process_struct
{
    int pid;
    int at;
    int bt;
    int ct,tat,wt,rt,start_time;
}ps[100];

int findmax(int a,int b)
{
    return a>b?a:b;
}

int findmin(int a,int b)
{
    return a<b?a:b;
}

int main()
{
    int n;
    int current_time=0,prev=0,completed=0;
    bool is_completed[100]={false};
    float sum_tat=0,sum_wt=0,sum_rt=0;
    bool is_process =true;
    float cpu_utilisation,throughput,idle_time=0;

   printf("enter the no of process\n");
   scanf("%d",&n);

   for(int i=0;i<n;i++)
   {
    printf("enter %d process arrival time : ",i);
    scanf("%d",&ps[i].at);
    ps[i].pid=i;
   }    
for(int i=0;i<n;i++)
   {
    printf("enter %d process burst time : ",i);
    scanf("%d",&ps[i].bt);
   }    
   
   while(completed!=n)
   {
        int min_index=-1;
        int minimum = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(ps[i].at<=current_time && is_completed[i]==0)
        {
            if(ps[i].bt<minimum)
            {
                minimum=ps[i].bt;
                min_index=i;
            }
            if(ps[i].bt==minimum)
            {
                if(ps[i].at<ps[min_index].at)
                {
                    minimum = ps[i].bt;
                    min_index=i;
                }
            }
        }
    }

    if(min_index=-1)
    {
        current_time++;
    }
    else{
        ps[min_index].start_time = current_time;
        ps[min_index].ct=ps[min_index].start_time+ps[min_index].bt;
        ps[min_index].tat = ps[min_index].ct-ps[min_index].at;
        ps[min_index].wt = ps[min_index].tat-ps[min_index].bt;
        ps[min_index].rt = ps[min_index].wt;

    }
   }
}
