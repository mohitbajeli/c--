#include<stdio.h>
int main()
{
    int p[10],at[10],bt[10],ct[10],tat[10],wt[10],temp=0,i,j,n;

    float atat = 0,awt = 0;

    printf("enter the no of process\n");
    scanf("%d",&n);
    
    printf("enter %d process\n",n);
    for(i = 0;i<n;i++){
    scanf("%d",&p[i]);
    }

    printf("enter %d arrival time\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&at[i]);
    }

    printf("enter %d burst time\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i);j++)
        {
          if(at[j]>at[j+1])
          {
            temp = p[j+1];
            p[j+1]=p[j];
            p[j]=temp;
            temp= at[j+1];
            at[j+1]=at[j];
            at[j]=temp;
            temp = bt[j+1];
            bt[j+1]=bt[j];
            bt[j]=temp;

          }

        }
    }
        ct[0]=at[0]+bt[0];
        for(i =1;i<n;i++)
        {
            temp =0;
            if(ct[i-1]<at[i])
            {
                temp=at[i]-ct[i-1];
            }
            ct[i]=ct[i-1]+bt[i]+temp;
        }

        for(i=0;i<n;i++)
        {
            tat[i]=ct[i]-at[i];
            wt[i] = tat[i]-bt[i];
            atat+=tat[i];
            awt+=wt[i];
        }
        atat = atat/n;
        awt = awt/n;
        printf("\n pid\t AT\t BT\t CT\t TAT\t WT\t \n");
        for(i=0;i<n;i++){
        printf("\n p%d\t %d\t %d\t %d\t %d\t %d\t \n",p[i],at[i],bt[i],ct[i],tat[i],wt[i]);
        }
        printf("average turnaround time is %f \n",atat);
        printf("avearge waiting time is %f \n",awt);
        return 0;

    }
