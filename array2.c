/*"Three tests are given, each one worth 50 points. The better score of the first two tests is added to that of the third one to determine the final score and a grade is assigned to each student on the percentage score as per the following rules.
> = 80                         A
> = 70 but <80                 B
> = 60 but <70                 C
> = 50 but <60                 D
< 50                           F   
Write a program to show how to accept the input data related to each student and process them to print out a result sheet with the output in descending order of the percentage score." */

/*#include<stdio.h>
int main(){
    int n;
    
    printf("enter the number of students: ");
    scanf("%d",&n);
    
    int arr[n];
   
    printf("enter scores:\n");
         for( int i=0; i<n; i++){
         printf("score %d: ",i+1);
         scanf("%d",&arr[i]);
    }
        int i=0;
       while(i < n-1){
          int s = arr[i] + arr[i+1] ;
          
           if( s >= 80 ){
              printf("%d: A\n",s);
           }
           
           else if( s >= 70 && s < 80 ){
           printf("%d: B\n",s);
           }
           
           else if( s >= 60 && s < 70 ){
           printf("%d: C\n",s);
           }
           else if( s >= 50 && s < 60 ){
           printf("%d: D\n",s);
           }
           else if( s < 50 ){
           printf("%d: F\n",s);
         }
         
          i++;
        }
       
        return 0;
       } */
           
 // Draw a flowchart to obtain the sum and the difference between two matrices.  
    
 /* #include<stdio.h>
   int main(){
      int matrix1[10][10] ;
      int matrix2[10][10] ; 
      int sum[10][10] ;
      int difference[10][10];
      int rows,column;
      int i,j;  
      
      printf("Enter the number of rows: ");
      scanf("%d",&rows);
      
      printf("Enter the number of columns: ");
      scanf("%d",&column);
      
      printf("enter number for matrix 1:\n");
      for(i=0; i<rows; i++){
      for(j=0; j<column; j++){
         printf("enter number[%d][%d]: ",i,j);
         scanf("%d",&matrix1[i][j]);
         }
        }
        
     printf("enter number for matrix 2:\n");
     for(i=0; i<rows; i++){
     for(j=0; j<column; j++){
        printf("enter number[%d][%d]: ",i,j);
        scanf("%d",&matrix2[i][j]);
        }
       }
       
     for(i=0; i<rows; i++){
     for(j=0; j<column; j++){
    sum[i][j] = matrix1[i][j] + matrix2[i][j];
     }
    }
   
    for(i=0; i<rows; i++){
    for(j=0; j<column; j++){
    difference[i][j] = matrix1[i][j] - matrix2[i][j];
    }
   }
   
   printf(" sum of the matrices: \n");
   for(int i=0; i<rows; i++){
   for(int j=0; j<column; j++){
   printf("%d ",sum[i][j]);
   }
   printf("\n");
  }
  
  printf(" difference of the matrices: \n");
  for(int i=0; i<rows; i++){
  for(int j=0; j<column; j++){
    printf("%d ",difference[i][j]);
    }
   printf("\n");
   }
   return 0;
   }  */
    
/*  "Convert a given Roman numeral into its decimal equivalent. The following table gives the Roman numerals and their decimal equivalents:   Roman                 Decimal
M                 1000
D                 500
C                 100
L                 50
X                 10
V                 5
I                 1"    */ 

/*#include <stdio.h>
#include<string.h>

 int main(){
    char n[100];
    int k[100];  
    
    char romanNum[7] = { 'M', 'D', 'C', 'L', 'X', 'V', 'I' };
    int decimal[7] = { 1000, 500, 100, 50, 10, 5, 1 };
    int s=0, m=0;
    printf("Enter a character: ");
    scanf("%s",n);
    
    int length = strlen(n);
    for(int i=0; i<length; i++)
    {
       for(int j=0; j<7; j++)
       {
          if(romanNum[j] == n[i])
          {
             k[m] = decimal[j];
                 m++;
          }
        }
     }
     for(int l=0 ; l<m;l++)
      {
           printf("%d\n",k[l]);
      }
      int sum = 0;
      for(int h=0; h<m ; h++)
      {
         if(k[h] >= k[h+1])
           {
             sum = sum + k[h];
           }
         else
          {
            sum = sum - k[h];
          }
        }
       printf("%d",sum);
       
       return 0;
       } */
   
//Convert a decimal number into its Roman equivalent.


/*#include<stdio.h>
  #include<string.h>
  
  int main(){
  int n;
  scanf("%d",&n);
  
  int decimal[13] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
  char roman[][13] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    
    char s[13]="" ;
    for(int i=12; i>=0; i--){
        int D = ( n / decimal[i]);
            if( D!=0 ){
               for(int j=0; j<D; j++){
                  strcat(s,roman[i]);
                  }
                 }
                n =( n % decimal[i]);
                }
                 printf("%s",s);
                 return 0;
                 } */
    


//Take an array from the user as input and print the mean, median, and mode of the array

/*#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    
   int arr[n];
   printf("Enter the elements of the array\n: ");
   for(int i=0; i<n; i++){
      scanf("%d",&arr[i]);
   }
   
   // sorting
 for(int i=0; i<n-1;i++){ 
    for(int j=i+1; j<n; j++){
      if(arr[j] < arr[i]){
     int temp = arr[j];
       arr[j] = arr[i];
       arr[i] = temp ;
       }
     }
   }
               
            // MEAN
   float mean;
   int sum = 0;
 
    for(int i=0; i<n; i++){
          sum += arr[i];
    }
    mean =(float)sum / n ;
  printf("Mean: %.2f\n",mean);
  
  //median
  
  float median;
  int m = n/2;
  if( n % 2 == 0){
  median = arr[m - 1] + arr[m] / 2.0 ;  
  } else {
      median = arr[n/2];   
   
   // MODE
  
   int mode = arr[0];
    int max = 1;
    int count = 1;
    
    for(int i=1; i<n; i++){
    for(int j=i+1;j<n;j++){
        if(arr[i] == arr[j]){
          count++ ; 
          }
       else{
        if( count > max ){
           max = count;
           mode = arr[i];
           }
          }
         }
        }
    printf("Mode: %d\n", mode);
   return 0;
   }  */
      
    
//Take an array of size N and a number K from the user as input, and print the elements of an array in a rotated manner with a gap of K. Eg, let us say the array is - 3, 6, 7, 5, 10. And the value of k = 3. The output should be - 7, 3, 10, 6, 5. If k = 2, the output should be - 6, 5, 3, 10, 7    
 
/* #include<stdio.h>
 
 int main(){
     int n,k;
     
     printf("enter the size of array: ");
     scanf("%d",&n);
     
     int arr[n];
     
     printf("enter the elements of array:\n");
     for(int i = 0; i < n; i++){
         scanf("%d",&arr[i]);
         }
         
      printf("enter the value of k: ");
      scanf("%d",&k);
      
      printf("rotate array with a gap of %d: ",k);
      
      //rotate
      
      for(int i=0; i<n; i++){
      int m = (i + k) % n ; 
        printf("%d ",arr[m]);
        }
        printf("\n");
        return 0;
        }
       */
  
 
  
//Take an array from the user as input and find duplicate elements in an array.
   
/*#include<stdio.h>
int main(){
	int n;
	printf("enterthe size of array: ");
	scanf("%d",&n);

    int arr[n];

 printf("enter the number of array:\n");
     for(int i=0; i<n; i++){
     scanf("%d",&arr[i]);
	}
	
    for(int i=0; i<n; i++)
    {
         int count=0;
    	for(int j=i+1; j<n; j++)
    	{
       		if(arr[i] == arr[j])
       		{
        		 count++ ;
         	}
        }
        if( count == 1)
        {
       		printf("%d ",arr[i]);
        }
    }
      return 0;
 }
    */   


//Take two sorted arrays from the user as input and Merge them into a single sorted array

/*#include<stdio.h>
int main(){
    int m;
    printf("Enter the size of the first array: ");
    scanf("%d",&m);
    
    int a[m];
    
    printf("enter %d value for the first array: ",m);
    for(int i=0; i<m; i++) {
        scanf("%d",&a[i]);
    }
        
    int n;
    printf("Enter the size of the first array: ");
    scanf("%d",&n);
    
    int b[n];
    
    printf("enter %d value for the second array: ",n);
    for(int i=0; i<n; i++) {
       scanf("%d",&b[i]);
    }
    
    int c[m + n];
    int k=0;
    
    for(int i=0; i<m; i++) {
        c[k] = a[i];
        k++;
    }
    
    for(int i=0; i<n; i++) {
       c[k] = b[i];
       k++;
    }
    
    for(int i=0; i<m+n; i++) {
      printf("%d",c[i]);
    }
      return 0;
 } */
    
        
//  Given an unsorted array of size N that contains only non-negative integers, find a contiguous subarray that adds to a given number S. In case of multiple subarrays, return the subarray which comes first on moving from left to right. Let us say the array is - 3, 6, 7, 5, 10. And the value of S = 12. The output should be - 7, 5  
    
/*#include<stdio.h>
int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    
    int s = 12;
    
    int arr[n];
    printf("Enter the %d elements:",n);
    for(int i=0; i<n; i++) {
       scanf("%d",&arr[i]);
    }
    
    int sum = 0;
    
    for(int i=0; i<n; i++)
    {
    for(int j=i+1; j<n; j++)
    {
    sum = arr[i] + arr[j] ;
        if ( sum == s ) {
        printf("%d\n%d\n",arr[i],arr[j]);
        }
       }
      }
     return 0;
    } */
    
//Take two sorted arrays from the user as input and find the Union and Intersection(double) of the arrays.

/*#include <stdio.h>

int main()
{
    int n,m;
    printf("Enter the total element of first array and second array \n");
    scanf("%d %d",&n,&m);
    
    int unique[n+m];
    
    int a[n];
    printf("Enter element of first array : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        unique[i] = a[i];
        
    }
    
    printf("Enter the element of second array\n");
    int b[m];
    for(int i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
        unique[n+i] = b[i]; 
    }
    
    int c=0,count,k;
    int intersection[n];
    
   
    int i,j;
    for(i=0; i<n; i++)
    {
        count = 0;
        
        for(j=0; j<m; j++)
        {
            if(a[i] == b[j])
            {
                count++;
                break;
            }
        }
        
        if(count > 0)
        {
            intersection[c] = a[i] ;
            c++;
        }
    }
    
     
    printf("Intersection element are : ");
    
    for(i=0; i<c; i++)
    {
        for(j=0; j<i; j++)
        {
            if(intersection[i] == intersection[j])
            {
                break;
            }
        }
        if(i==j)
        {
            printf("%d ",intersection[i]);
        }
    }
    
   printf("Unique elements are :  ");
  
   for(i=0; i<n+m; i++)
   {
       for(j=0; j<i; j++)
       {
           if(unique[i] == unique[j])
           {
               break;
           }
       }
       if(i==j)
       {
           printf("%d ", unique[i]);
       }
   }
  
    
    return 0;
  
} */


        
//Take two sorted arrays of size m and n from the user as input and return the median of the two sorted arrays.

      
 /*#include <stdio.h>

int main()
{
    int n,m;
    printf("Enter the total element of first array and second array \n");
    scanf("%d %d",&n,&m);
    
    int sorted[n+m];
    
    int a[n];
    
    printf("Enter element of first array : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
         sorted[i] = a[i];
        
    }
    int b[m];
    
    printf("Enter the element of second array : \n");
    for(int i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
       sorted[n+i] = b[i]; 
    }
    
    // sorting is lnot mandatory 
    
    for(int i=0;i<n+m-1;i++)
    {
     for(int j=0;j<n+m-1;j++)
     {
        if(sorted[j] > sorted[j+1])
        {
        int temp = sorted[j];
            sorted[j] = sorted[j+1];
            sorted[j+1] = temp;
        }
      }
    } 
   
           int k=n+m;
      float median;
    int l = k/2 ;
       if( k % 2 == 0)
       {
       median = sorted[l - 1] + sorted[l]/2.0 ;
       } else 
         {
         median = sorted[l];
         }
    printf("the median of merged array: %2f\n",median);
    
    return
    } */
    
    
 // Take a sorted array from the user as input and find a number using Binary search the array. 

/*#include<stdio.h>
	int main(){
	int n;
	printf("Enter the size of array: \n");
	scanf("%d",&n);
	int arr[n];
//int arr[n] ={1,2,3,4,5,6,7,8,9,10} 
 printf(" Enter %d  elements :\n",n);
	for(int i=0; i<n; i++)
	{
             scanf("%d",&arr[i]);
         }

	int l=0;
	int h=n-1;

	int k;
  printf("enter the element for search: ");
     scanf("%d",&k);

   while(l<h)
   {
	 int m=l+(h) / 2 ;
  	 if(arr[m]==k)
  	 {
             printf("elements %d found at index %d.\n",k,m);
             return 0;
          }
 
 	else if(arr[m] < n)
  	{
 	  l=m++;
 	} else{
  	       h=m--;
 	      }
  }
 printf("%d elements not found\n",k);
return 0;
} */

                 // LINEAR SEARCH

/*#include<stdio.h>
	int main(){
	int n;
	printf("Enter the size of array: \n");
	scanf("%d",&n);
	int arr[n];
 
 printf(" Enter %d  elements :\n",n);
	for(int i=0; i<n; i++){
             scanf("%d",&arr[i]);
             }
             
         int k;
	 printf("enter the element for search: ");
          scanf("%d",&k);
          
         for(int i=0; i<n; i++){
            if( arr[i] == k ){
  printf("elements %d found at index %d.\n",k,i);
             return 0;
            }
             
       }
 printf("%d elements not found\n",k);
 
return 0;
}     


// "Learn these sorting algorithms and apply them to an unsorted array:  
//  Selection Sort 
//Insertion Sort
//Bubble Sort "  
                   // SELECTION SORT :
                    
/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int arr[n];
	int temp = 0;
	
	printf("Enter the elements of array\n: ");
	for(int i=0;i<n;i++)
	 {
	   scanf("%d",&arr[i]);
	 }
	
	for(int i=0;i<n-1;i++)
	{
	    int min = i;
	    
	for(int j=i+1;j<n;j++)
	{
	   if(arr[j] < arr[min])
	   {
	      min = j ;
	   }
	 }
	   
	    temp = arr[i];
	    arr[i] = arr[min];
	    arr[min] = temp;
	    
	     }
	printf(" array of selection sort : ");
	for(int i=0;i<n;i++)
	{
	   printf("%d ",arr[i]);
         }
  return 0;
} */
	  
             // INSERTION SORT :
             
/* #include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array\n: ");
    scanf("%d",&n);
    
       int arr[n];
       int temp=0;
    
    printf("Enter the elements:\n ");
	 for(int i=0;i<n;i++)
    	{
     	  scanf("%d",&arr[i]);
   	}
   	    for(int i=1;i<n;i++)
   	    {
   	    for(int j=i;j>=1;j--)
   	    {
   	      if(arr[j-1] > arr[j])
   	      {
   	        temp = arr[j-1];
   	        arr[j-1] = arr[j];
   	        arr[j] = temp;
   	      }
   	    }
   	  }
   	  
   printf(" sorted array of insertion: ");
         for(int i=0;i<n;i++)
         {
           printf("%d ",arr[i]);
         }
       return 0;
      }  */
      
          // BUBBLE SORT
   	      
      
 /*#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int arr[n];
	int temp = 0;
	
	printf("Enter the elements of array\n: ");
	for(int i=0;i<n;i++)
	 {
	   scanf("%d",&arr[i]);
	 }
	
	for(int i=0;i<n-1;i++){
	    
	for(int j=0;j<n-i-1;j++)
	{
	   if(arr[j] > arr[j+1])
	   {
	    int temp = arr[j];
	    arr[j] = arr[j+1];
	    arr[j+1] = temp;   	     
	   }
	 }
       }
      printf(" sorted array of bubblesort: ");
         for(int i=0;i<n;i++)
         {
           printf("%d ",arr[i]);
         }
       return 0;
      }  */
	   
//Draw a flowchart to convert number decimal to binary	  
   
   
      
       
        
        
           
       
      
        
    
       
    
    
   




























