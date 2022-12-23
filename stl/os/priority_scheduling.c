#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<stdbool.h>
struct process_struct{
    int pid;
    int bt;
    int at;
    int priority;
    int tat,wt,ct,start_time;
}ps[100];
int main()
{
    int n;
    printf("enter the no of processes:-");
    scanf("%d",&n);

    int completed=0;
    bool is_completed[100]={false};
    int curr_time=0;
    int bt_remaining[100];


    for(int i=0;i<n;i++)
    {
        printf("process %d ",i);
        printf("arrival time ");
        scanf(" %d",&ps[i].at);
        printf("burst time :");
        scanf("%d",&ps[i].bt);
        printf("priority :");
        scanf("%d",&ps[i].priority);
        ps[i].pid=i;
        bt_remaining[i]=ps[i].bt;
 
    }
    while(completed!=n)
    {
        int max_index=-1;
        int maximum=-1;
        for(int i=0;i<n;i++)
        {
            if(ps[i].at<=curr_time && is_completed[i]==false)
            {
                if(ps[i].priority>maximum)
                {
                    maximum=ps[i].priority;
                    max_index=i;
                }
                if(ps[i].priority==maximum)
                {
                    if(ps[i].at<ps[max_index].at)
                    {
                        maximum=ps[i].priority;
                        max_index=i;
                    }
                }
            }           
        }
        if(max_index==-1)
        {
            curr_time++;
        }
        else{
            if(bt_remaining[max_index]==ps[max_index].bt)
            {
                ps[max_index].start_time=curr_time;
            }
            bt_remaining[max_index]-=1;
            curr_time++;
            if(bt_remaining[max_index]==0)
            {
               
                ps[max_index].ct=curr_time;
                ps[max_index].tat=ps[max_index].ct-ps[max_index].at;
                ps[max_index].wt=ps[max_index].tat-ps[max_index].bt;
                completed++;
                is_completed[max_index]=true;

            }
        }

    }
    for(int i=0;i<n;i++)
    {
        printf(" process-%d \t %d \t %d \t %d \t %d \n",ps[i].pid,ps[i].at,ps[i].bt,ps[i].wt,ps[i].tat);
    }
       return 0 ;
}
