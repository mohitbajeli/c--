#include<stdio.h>
#include<stdlib.h>

struct process
{
     int pid;
     int at;
     int bt;
     int ct;
     int tat;
     int wt;
     int rt;
};

int comparator(const void*p , const void*q)
{
        int l= ((struct process*)p)->at;
        int r= ((struct process*)q)->at;

        int c= ((struct process*)p)->pid;
        int d= ((struct process*)q)->pid;

    if(l==r)
      return (c-d);
    return (l-r);
 }



int main()
{
    int n;
    printf("Enter the number of process :");
    scanf("%d",&n);

    struct process p[n];

    printf("Enter the sequence of process id:");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &p[i].pid);
    }
    
    printf("Enter the sequence of process  arrival time:");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &p[i].at);
    }
    printf("Enter the sequence of process  burst time:");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &p[i].bt);
    }

    qsort((void*)p,n,sizeof p[0],comparator);
    int temp=0;
   
    for(int i=0;i<n;i++)
    {
        if(p[i].at<=temp)
        {
            temp+=p[i].bt;
            p[i].ct=temp;
            p[i].tat=p[i].ct-p[i].at;
            p[i].wt=p[i].tat-p[i].bt;
            p[i].rt=p[i].wt;
        }

        else
        {
              while(temp<p[i].at)
              {
                temp++;
              }
            temp+=p[i].bt;
            p[i].ct=temp;
            p[i].tat=p[i].ct-p[i].at;
            p[i].wt=p[i].tat-p[i].bt;
            p[i].rt=p[i].wt;
        }
    }

    float avgtat,avgrt,avgwt, sum1, sum2, sum3;
    for(int i=0;i<n;i++)
    {
        sum1+=p[i].tat;
        sum2+=p[i].rt;
        sum3+=p[i].wt;
    }

    avgtat=sum1/n;
    avgrt=sum2/n;
    avgwt=sum3/n;
  
  printf("Pid AT BT CT TAT WT RT\n");
  for(int i=0;i<n;i++)
  {
    printf("%d  %d  %d  %d  %d  %d  %d\n",p[i].pid,p[i].at,p[i].bt,p[i].ct,p[i].tat,p[i].wt,p[i].rt);
  }
 printf("Average Turn Around Time: %f\n",avgtat); 
 printf("Average Waiting Time: %f\n",avgwt); 
 printf("Average Response Time: %f\n",avgrt); 

return 0;
}