#include <stdio.h>
int main()
{
    // P0, P1, P2, P3, P4 are the Process names here
 
    int n, m;
    printf("enter the no of processes\n");
    scanf("%d",&n);
    printf("enter the no of resources\n");
    scanf("%d",&m);
    int alloc[n][m];
    printf("enter the allocated resources\n");
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        scanf("%d",&alloc[i][j]);
      }
    }

    int max[n][m];
    printf("enter the max resources need\n");
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        scanf("%d",&max[i][j]);
      }
    }
 
    int avail[m];
    printf("enter the available resources\n");
    for(int i=0;i<m;i++)
    {
      scanf("%d",&avail[i]);
    }
    int f[n], ans[n], ind = 0;
    for (k = 0; k < n; k++) {
        f[k] = 0;
    }
    int need[ n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            need[i][j] = max[i][j] - alloc[i][j];
    }
  
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            if (f[i] == 0) {
 
                int flag = 0;
                for (int j = 0; j < m; j++) {
                    if (need[i][j] > avail[j]){
                        flag = 1;
                         break;
                    }
                }
 
                if (flag == 0) {
                    ans[ind++] = i;
                    for (int y = 0; y < m; y++)
                        avail[y] += alloc[i][y];
                    f[i] = 1;
                }
            }
        }
    }
   
     printf("\nPID\tmaximum\t\tallocaed\tNeed\n");
     for(int i=0;i<n;i++)
     {
      printf("P[%d]\t",i);
      for(int j=0;j<m;j++)
      printf("%d ",max[i][j]);
      printf("\t\t");
      for(int j=0;j<m;j++)
      printf("%d ",alloc[i][j]);
      printf("\t\t");
      for(int j=0;j<m;j++)
      printf("%d ",need[i][j]);
      printf("\n");
     }


      int flag = 1;
       
      for(int i=0;i<n;i++)
    {
      if(f[i]==0)
      {
        flag=0;
         printf("The following system is not safe");
        break;
      }
    }
     
      if(flag==1)
    {
      printf("Following is the SAFE Sequence\n");
      for (int i = 0; i < n - 1; i++)
        printf(" P%d ->", ans[i]);
      printf(" P%d", ans[n - 1]);
    } 
     
 
    return (0);
 
    
}