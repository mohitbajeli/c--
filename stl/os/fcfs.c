#include<stdio.h>
#include<stdlib.h>

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

int comparatorAT(void const *a,void const *b)
{
  int x = ((struct process_struct *)a)->at;
  int y = ((struct process_struct *)b)->at;

  if(x<y)
  return -1;
  else if(x>=y)
  return 1;
}

int comparatorPID(void const *a,void const *b)
{
  int x = ((struct process_struct *)a)->pid;
  int y = ((struct process_struct *)b)->pid;

  if(x<y)
  return -1;
  else if(x>=y)
  return 1;
}

int main()
{
  int n;
  float sum_tat=0,sum_wt=0,sum_rt=0;
  float length_cycle,cpu_utilisation,throughput;
  int idle_time=0;

  printf("enter the no of process\n");
  scanf("%d",&n);

  for(int i=0;i<n;i++)
  {
    printf("enter %d process arrival time\n",i);
    scanf("%d",&ps[i].at);
    ps[i].pid=i;
  }

  for(int i=0;i<n;i++)
  {
    printf("enter %d process burst time\n",i);
    scanf("%d",&ps[i].bt);
  }

  qsort((void *)ps,n,sizeof(struct process_struct),comparatorAT);

  for(int i=0;i<n;i++)
  {
    ps[i].start_time = (i==0)?ps[i].at:findmax(ps[i].at,ps[i-1].ct);
    ps[i].ct = ps[i].start_time+ps[i].bt;
    ps[i].tat = ps[i].ct-ps[i].at;
    ps[i].wt = ps[i].tat-ps[i].bt;
    ps[i].rt=ps[i].wt;

    sum_tat += ps[i].tat;
    sum_wt  += ps[i].wt;
    sum_rt  += ps[i].rt;

    idle_time+= (i==0)?0:ps[i].start_time-ps[i-1].ct; 
  }

  length_cycle = ps[n-1].ct-ps[0].at;
  qsort((void *)ps,n,sizeof(struct process_struct),comparatorPID);
  
  cpu_utilisation = (float)(length_cycle-idle_time)/length_cycle;

  throughput = (float)(n/length_cycle);

  printf("\nPID\tAT\tBT\tCT\tTAT\tWT\tRT\n");
  for(int i=0;i<n;i++)
  {
    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n",ps[i].pid,ps[i].at,ps[i].bt,ps[i].ct,ps[i].tat,ps[i].wt,ps[i].rt);
  }

  printf("avg tat is %f\n",sum_tat/n);
  printf("avg wt is %f\n",sum_wt/n);
  printf("avg rt is %f\n",sum_rt/n);

  printf("cpu_utilisation is %f\n",cpu_utilisation*100);
  printf("throughput is %f\n",throughput);

  return 0;
}
