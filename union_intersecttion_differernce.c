
#include<stdio.h>
#include<conio.h>

 int a[10],b[10],c[10],d[10],n1,n2;
 int i,j,h,k=0,l=0;
 int m=0,n=0;//for difference
 
void union1(int n1,int n2)
{
    
   // logic for calculate union

   // copy the element of set A in set C
   for(i=0;i<n1;i++)
   {
       // repeted element is not allowed so we check is any value repeted
      for(j=0;j<k;j++)
      {
         if(c[j]==a[i]) 
            break;
       }
       if(j==k) //if not repesated then store value in set c 
       {
          c[k]=a[i];
          k++;
       }
    }
    // copy element of set B in set C
       for(i=0;i<n2;i++)
   {
       // check for repeted element
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k) // if element is not repeted then store in set C
     {
       c[k]=b[i];
       k++;
     }
   }

   // printing of union of set A and set B
   printf("Union of set A and B is:-\n");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);

}

void intersection(int n1,int n2)
{
    // Logic for intersection
    
    for( i=0;i<n1;i++)
    {
         for(j=0;j<n2;j++)
         {
            if(a[i]==b[j])
            {
                c[l]=a[i];
                l++;
            }
         }
        
    }
    
    // Printing the elements of intersection of set A and set B
    printf("intersection of set A and set B is:-\n");
    for(i=0;i<l;i++)
      printf("%d ",c[i]);
    

}
void difference(int n1,int n2)
{
    // logic for find A-B
    
    for( i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(b[j]==a[i])
             break;
        }
        if(j==n2)
        {
          // here we check that is element already present in the set 
          // if present than ignore it otherwise add to the difference set   
            for(h=0;h<m;h++)
            {
                if(c[l]==a[i])
                 break;
            }
            if(h==m)
            {
                c[m]=a[i];
                m++;
            }
        }
        
    }
    
    // logic for find B-A
    
    for( i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(b[i]==a[j])
             break;
        }
        if(j==n1)
        {
          // here we check that is element already present in the set 
          //if present than ignore it otherwise add to the difference set
            for(l=0;l<n;l++) 
            {
                if(d[l]==b[i])
                 break;
            }
            if(l==n)
            {
                d[n]=b[i];
                n++;
            }
        }
        
    }
     printf("Difference of A-B is:-\n");
     for(i=0;i<m;i++)
     {
         printf("%d ",c[i]);
     }
     printf("\n");
     printf("Difference of B-A is:-\n");
     for(i=0;i<n;i++)
     {
         printf("%d ",d[i]);
     }
}

void main()
{
  

   // taking input set A

   printf("Enter number of  element of set A\n");
   scanf("%d",&n1);
   printf("Enter the element of set A \n");
   for(i=0;i<n1;i++)
      scanf("%d",&a[i]);

    // taking input set B

   printf("Enter number of element of set B\n");
   scanf("%d",&n2);
   printf("Enter the element of set B \n");
   for(i=0;i<n2;i++)
     scanf("%d",&b[i]);

     //calling union
     union1(n1,n2);
     printf("\n");
     fflush(stdout);

     //calling intersection
     intersection(n1,n2);
     printf("\n");
     difference(n1,n2);

}