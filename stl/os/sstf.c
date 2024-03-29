#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>  
#include<limits.h>  
#include<string.h> 


int findclosestCylinder(int initial_pos, bool visited[],int request_queue[],int n)
{
  int min=INT_MAX,min_index=-1;  
  for(int i=0;i<n;i++)
  {
      if(visited[i] == false && abs(initial_pos - request_queue[i]) < min)
      {
          min = abs(initial_pos - request_queue[i]);
          min_index = i;//gjjffsdghjnscs
      }
  }
  return min_index;
}

int applySSTFAlgo(int request_queue[], int initial_pos,bool visited[],int seek_sequence[],int n)
{
    int i=0;            
    int completed=0,total_head_movement=0;
    while(completed!=n)
    {
      int min_index=findclosestCylinder(initial_pos,visited,request_queue,n);
      
      total_head_movement += abs(initial_pos - request_queue[min_index]);
      initial_pos = request_queue[min_index];
      seek_sequence[i++] = request_queue[min_index];
      visited[min_index]=true;    
      completed++;
    }    
    
    return total_head_movement; 
}

int main()
{
    int total_cylinders,total_head_movement,initial_pos,n;
    
     
    printf("\nEnter the total no. of cylinders in HDD:\n");
    scanf("%d",&total_cylinders);
 
    printf("\nEnter the no. of cylinders to enter in Request queue:\n");
    scanf("%d",&n);

    int request_queue[n]; 
    int seek_sequence[n];

    printf("\nEnter the cylinders no. in Request queue :\n");
    for(int i=0;i<n;i++)
     scanf("%d",&request_queue[i]);
    printf("\nEnter the initial Position of RW head: ");
    scanf("%d",&initial_pos);
    
    bool visited[n];     
    memset(visited,false,n*sizeof(bool));
    
    
    
    total_head_movement = applySSTFAlgo(request_queue,initial_pos,visited,seek_sequence,n);
    
    
     
    printf("\n\n*********** OUTPUT **********");
    printf("\nSeek Sequence: ");
    for(int i=0;i<n;i++)
     printf("%d ",seek_sequence[i]);

    printf("\nTotal No. of Head Movements = %d\n",total_head_movement);
    printf("\nAverage head movements = %.2f\n\n",(float)total_head_movement/n);

    return 0;
}