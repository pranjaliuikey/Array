// Write a Program to add two matrices and store them in a separate matrix.

/*#include<stdio.h>
int main(){

    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    
    int arr[r][c];
    int add[r][c];

    
    printf("Enter the number of 1st matrix\n: ");
    for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
          scanf("%d",&arr[i][j]);
       }
        //  printf("\n");
     }
     
     int brr[r][c];
     
     printf("Enter the number of 2nd matrix\n: ");
     for(int i=0;i<r;i++){
         for(int j=0;j<c;j++){
            scanf("%d",&brr[i][j]);
           }
      }
          printf("\n");
      
          
         // addition
          
          for(int i=0;i<r;i++){
             for(int j=0;j<c;j++){
             add[i][j] = arr[i][j] + brr[i][j];
             }
             printf("\n");
          }
          
          // print
          
           for(int i=0;i<r;i++){
              for(int j=0;j<c;j++){
                 printf("%d ",add[i][j]);
                 }
                 printf("\n");
           }
               return 0;
               } */
                
 //Write a program to subtract two matrices and store them in a separate matrix.
 
/* #include<stdio.h>
 int main(){
     int r;
     printf("Enter the number of rows: ");
     scanf("%d",&r);
     
     int c;
     printf("Enter the number of column: ");
     scanf("%d",&c);
     
     int arr[r][c];
     
     printf("Enter the number of first matrix\n");
           for(int i=0;i<r;i++){
              for(int j=0;j<c;j++){
                  scanf("%d",&arr[i][j]);
                  }
               }
               printf("\n");
               
     int brr[r][c];
     
     printf("Enter the number of second matrix\n");
           for(int i=0;i<r;i++){
              for(int j=0;j<c;j++){
                  scanf("%d",&brr[i][j]);
                  }
              }
              printf("\n");
              
        // SUBSTRACT
        
      int sub[r][c];
          for(int i=0;i<r;i++){
             for(int j=0;j<c;j++){
       sub[i][j] = arr[i][j] - brr[i][j];
       }
      }
      printf("\n");
      
      printf("resultant matrix:\n");
            for(int i=0;i<r;i++){
               for(int j=0;j<c;j++){
                  printf("%d ",sub[i][j]);
                  }
                  printf("\n");
            }
      
       return 0;
       } */
            
//Write a program to multiply two matrices and store the result in a separate matrix.                  
 
/* #include<stdio.h>
 int main(){
     int p;
     printf("Enter the number of rows: ");
     scanf("%d",&p);
 
     int r;
     printf("Enter the number of columns: ");
     scanf("%d",&r);
     
     int arr[p][r];
     
     printf("Enter the number of 1st matrix:\n");
           for(int i=0;i<p;i++){
               for(int j=0;j<r;j++){           
                  scanf("%d",&arr[i][j]);     
                  }
                }                           
               printf("\n");                
               
    
    int x;
     printf("Enter the number of rows: ");
     scanf("%d",&x);
 
     int y;
     printf("Enter the number of columns: ");
     scanf("%d",&y);
    
      int brr[x][y];
      
        printf("Enter the number of 2nd matrix:\n");
           for(int i=0;i<x;i++){
               for(int j=0;j<y;j++){
                  scanf("%d",&brr[i][j]);
                  }
                }
               printf("\n");
               
      int mul[p][y];
  
          for(int i=0;i<p;i++){
              for(int j=0;j<y;j++){
              
              mul[i][j]=0;
          for(int k=0;k<r;k++){
     mul[i][j] += arr[i][k] * brr[k][j];
             }
           }
         }
          printf("\n");
          
     printf("resultant matrix:\n");
     
           for(int i=0;i<p;i++){
              for(int j=0;j<y;j++){
            printf("%d ",mul[i][j]);
            }
           printf("\n");
         }
         
         
         return 0;
         } */
         
     
//Write a Program to transpose matrix A. Store the result in a separate matrix.
 
/*#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    int c;
    printf("Enter the number of column:");
    scanf("%d",&c);
    
    printf("enter all number of matrix:\n");
     int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
            }
           }
           
           printf("\n");
           
    for(int i=0;i<c;i++){
       for(int j=0;j<r;j++){
           printf("%d ",arr[j][i]);
           }
           printf("\n");
        }
          return 0;
          } */
      
           
/*"Write a program that prompts for a phone number of 10 digits and two dashes, 
with dashes after the area code and the next three numbers. 
For example, 017-555-1212 is a legal input." */

/*#include<stdio.h>
int main(){
    char phonenumber[12];
    
    printf("Enter phonenumber in xxx-xxx-xxxx this format: ");
    scanf("%s",phonenumber);
    
    if(phonenumber[3] != '-' || phonenumber[7] != '-' ){
       printf("invalid input(dashes)\n");
       return 0;
       }
       
       int i;
       for(i=0;i<12;i++){
          if(i != 3 && i != 7){
            if(phonenumber[i] < '0' || phonenumber[i] > '9'){
               printf("invalid input\n");
               return 0;
               }
             }
           }
           
       printf("valid phone number: %s\n",phonenumber);
       return 0;
       } */
       
 
/*"Write a program that rotates the elements of a list so that the elements at the
 first index moves to the second and element at the second index move to the third 
 and so on. The last element moves at the first index." */
 
/* #include<stdio.h>
 int main(){
     int n;                           // no
     printf("Enter the size : ");
     scanf("%d",&n);
     
     int matrix[n][n];
     
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){       
           scanf("%d",&arr[i][j]);
           }
         }
         
      // rotate
      
    int rotate = 2;
    
    for(int r=0;r<rotate;r++){
    int temp = matrix[n-1][n-1];
    
    for(int i = n-1;i>0;i--){
        matrix[i][0] = matrix[i-1][0];
        
    for(int j=n-1;j>0;j--){
        matrix[0][j] = matrix[0][j-1];*/
       
        


//Write a Program to check whether a given matrix is an identity matrix or not.
        
/*#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the size of matrix:\n");
    scanf("%d",&n);
    
    int matrix[n][n];
    
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
           scanf("%d",&matrix[i][j]);
       }
    }
        
     int id=0;
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
          if(i == j){
          if(matrix[i][j] == 1 ){
             id = 1;
             }
          }else{
          
          if(matrix[i][j] != 0 ){
                     id = 0;   
                     }
                   }
                 }
               }
           if(id == 1){
            printf(" identity matrix.\n");
         } else {
            printf("not identity matrix.\n");
          }
       
    return 0;
    } */
                   
         
 
 
 
// Write a Program to find whether the given matrix is diagonal or not.
      
/* #include<stdio.h>
 int main()
 {
    int n;
    printf("enter the size of matrix:");
    scanf("%d",&n);
    
    int matrix[n][n];
    
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
            scanf("%d",&matrix[i][j]);
        }
    }
    
         int diagonal = 1;
         
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
          if(i!=j)
          {
             if(matrix[i][j]!=0)
             {
               diagonal = 0;
             }
             
           } else {
                  if(matrix[i][j]==0)
                     {
                      diagonal = 0;
                     }
                   }
         }
       }
       
       if(diagonal == 1){
         printf("diagonal\n");
         }
       else{
          printf(" not diagonal\n");
         }
       return 0;
      } */
         
                
               
         
    
// Write a Program to find the sum of all diagonal elements of a matrix.   
         
/*#include<stdio.h>
int main(){
   int n,i,j;
   printf("Enter the size of the matrix: ");
   scanf("%d",&n);
   
   int matrix[n][n];
   
   printf("enter number\n:");
   
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++)
      {
        scanf("%d",&matrix[i][j]);
      }
   }
   
   int sum = 0;
   for(int i=0;i<n;i++)
   {
      sum += matrix[i][i];
   }
   
   printf("\n%d is the sum of diagonal ",sum);
   return 0;
   } */
   
   
// Write a Program to find the minimum element in the matrix.
   
 /*#include<stdio.h>
 int main(){
 int i,j;
 
 int r;
 printf("Enter the number of rows: ");
 scanf("%d",&r);
 
 int c;
 printf("Enter the number of column: ");
 scanf("%d",&c);
 
 int arr[r][c];
 
 printf("Enter all elements\n");
 
      for(i=0;i<r;i++)
     {
       for(j=0;j<c;j++)
       {
         scanf("%d",&arr[i][j]);
       }
     }
     
     int min = arr[0][0];
     
     for(i=0;i<r;i++)
    {
         for(j=0;j<c;j++)
        {
        if(arr[i][j] < min)
             {
               min = arr[i][j];
             }
        }
     }
    printf("\n%d minimum element of the matrix:",min);
    return 0;
    } */
    
// Write a Program to find the position of an element in a 2d array or Matrix.
 
/* #include<stdio.h>
 int main(){
     
     int p1,p2; // position
     
     int r;
     printf("Enter the number of rows: ");
     scanf("%d",&r);
     
     int c;
     printf("Enter the number of column: ");
     scanf("%d",&c);
     
     int i,j;
     
     int arr[r][c];
     
     printf("Enter all elements:\n");
     
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
           scanf("%d",&arr[i][j]);
           }
         }
         
           int element;
    printf(" Enter which element you want to found :");
           scanf("%d",&element);
           
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
           if(element == arr[i][j]){
              p1=i;
              p2=j;
              }
            }
          }
      printf(" position of %d number is %d,%d: ",element,p1,p2);
      return 0;
      } */
            


/*"Take the input from the user and print the following pattern according to the input.
For example for n = 3 print the following pattern  
        1 2 3
        8 9 4
        7 6 5
For n = 4 print the following pattern
          1   2    3   4 
        12 13 14   5
        11 16 15   6
        10   9   8   7 */


/*#include<stdio.h>
int main(){

   int m;
   printf("Enter no. of rows of matrix : ");     
   scanf("%d",&m);                                   
                                                     
   int n;
   printf("Enter no. of column of matrix : ");      
   scanf("%d",&n);                                      
   
       int a[m][n];
       
   printf("\nEnter elements of matrix : ");
   
      for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            }
           } 
           
          // SPIRAL PRINT
          
            printf("\n");
            
            int minr = 0;
            int maxr = m-1;
            int minc = 0;
            int maxc = n-1;
            int total = m * n;
            int count =0;
            
            while(count < total){
            
            // PRINT MINIMUM ROW
            
              for(int j=minc; j<=maxc && count < total; j++){
              printf("%d ",a[minr][j]);
              count++;
              }
              minr++;
              
              // PRINT MAXIMUM COLUMN
              
                for(int i=minr; i<=maxr && count < total; i++){
                   printf("%d ",a[i][maxc]);
                   count++;
                   }
                
                 maxc--;
                  
              
               //  PRINT MAXIMUM ROW
               
               for(int j=maxc; j>=minc && count < total; j--){
                   printf("%d ",a[maxr][j]);
                   count++;
                   }
                   maxr--;
                  
                   
                // PRINT MINIMUM COLUMN
                 
                  for(int i=maxr; i>=minr && count < total; i--){
                   printf("%d ",a[i][minc]);
                   count++;
                   }
                   minc++;
                }  
            return 0 ;
            }  */
            

