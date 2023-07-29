//Write a program to create an array of natural numbers till 20 and print it.

/*#include<stdio.h>
  int main(){
//int n;
//printf("Enter the size of array");
//scanf("%d",&n);
int arr[20];
for(int i=0 ; i<20 ; i++){
scanf("%d",&arr[i]);
}
printf("Natural numbers: \n");
for(int i=0 ; i<20 ; i++){
printf("%d\n",arr[i]);
}
return 0;
} */

//Write a program to input 5 names from the user and print them.

/*#include<stdio.h>
int main(){                    
  char name[5][50];

  printf("enter five names:\n");
  for(int i = 0; i < 5; i++){
      printf("Name %d: ",i+1); 
      scanf("%s", name[i]);
     }

for(int i=0;i<5;i++){
   printf("%d. %s\n",i+1,name[i]);
   }
 return 0;
 }  */
 
   
//Given an array and its size, print the array in reverse order. (l=[5,4,9,2,1,0])   

/*#include<stdio.h>
int main(){
int arr[6] = { 5,4,9,2,1,0 };
printf("reverse order\n");
for(int i=6-1; i>=0;i--){
printf("%d\n",arr[i]);
}
return 0;
} */

//Given an array and its size, print alternate elements from the last.(l=[5,4,9,2,1,0])

/*#include<stdio.h>
int main(){
int arr[6] = { 5,4,9,2,1,0 };
printf("alternate number\n");
for(int i=6-1; i>=0;i-=2){
printf("%d\n",arr[i]);
}
return 0;
} */

//Given an array ([10,12,34,11,4,5,1]). Print the last ‘i’ elements of any given array. ‘i’ accepted from the user.

/*#include<stdio.h>

int main(){                                         
    int arr[7] = { 10,12,34,11,4,5,1 };
    int i,J;
    
 printf("enter the value of 'i' : ");
 scanf("%d",&i);

for(int J=7-i ; J<7; J++){
printf("%d\n",arr[J]);
}
return 0;
} */

//Given an array ([1,2,3,4,5,6,7]), take a number from the user and check whether it exists in the array or not.

/*#include<stdio.h>
int main(){

printf("take num to check");
 int n,i;
scanf("%d",&n);

int arr[7] = { 1,2,3,4,5,6,7 };

for(int i=0;i<=7;i++){
  if( arr[i] == n ){
       printf("it is exist\n");
       }
 

  else ( i != 7);
	 {
  	printf("it is not exist\n");
	}
   }
return 0;
} */

//Write a program to create an array of 7 numbers from the user, and print true if the complete array consists of consecutive numbers or not.

/*#include<stdio.h>             
#include<stdbool.h>
    int main(){
         int n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	
	bool consecutive;
  int arr[n];
      printf("enter %d numbers:\n",n);
  for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
    }

  for(int i=0;i<n-1;i++){

  if(arr[i]+1 != arr[i+1]){
      bool consecutive = "FALSE";
      printf("FALSE\n");
     }

  else{
   bool consecutive = "TRUE";
  printf("TRUE\n");
   }
  }
   
  
  return 0;
  } */

//Make a flowchart to find the sum and average of elements in an array. Take elements as input from the user.

/*#include<stdio.h>             

	int main(){
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	float sum=0,avg;
	
printf("Enter the elements of array:\n");
	
for(int i=0 ; i<n ; i++){
scanf("%d",&arr[i]);
sum+=arr[i];
}
avg = sum/n ;

printf("sum: %2f\n",sum);
printf("Average: %2f\n",avg);
return 0;
} */

//Write a program to count the total occurrences(repeate) of a number in the array. Input the numbers from the user.

/*#include<stdio.h>             

	int main(){
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	int arr[n];                        
	int count =0;
	
printf("Enter the elements of array:\n");	
  for(int i=0; i<n ; i++){
     scanf("%d",&arr[i]);
  }
  

 int num;
 printf("enter number of count");
 scanf("%d",&num);
 
 for(int i=0;i<n;i++){
    if( arr[i] == num ){
       count ++ ;
   }
 }
printf("Total occurrence of %d is : %d\n",num,count);
return 0;
} */


// Take an array from the user as input and reverse it before printing it to the user.

/*#include<stdio.h>
int main(){
int n;
printf("Enter the size of array:");
scanf("%d",&n);
int arr[n];
for(int i=0 ; i<n ; i++) {
scanf("%d",&arr[i]);
}
printf("reverse order\n");
for(int i=n-1; i>=0 ; i--){
printf(" %d\n",arr[i]);
}
return 0;
} */

//Make a flowchart to count positive and negative elements in an array. Take elements as input from the user.

/*#include<stdio.h>

int main(){
  int n;
  printf("Enter the size of array:");
  scanf("%d",&n);
  
  int arr[n];
    printf("enter %d numbers:\n",n);
  int countposi=0;
int countnega=0;

  
  for(int i=0 ; i<n ; i++) {
    scanf("%d",&arr[i]);


   if(arr[i]>0){
   countposi++;
   }
   else {
   countnega++;
   }
  }
  printf("Number of positive elements: %d\n",countposi);
  printf("Number of negative elements: %d\n",countnega);
  
   return 0;
   } */
   
//Make a flowchart to print duplicates in an array. create an array based on the number size given by the user.

/*#include<stdio.h>
int main(){
int n;
printf("Enter the size of array:");
scanf("%d",&n);

   int arr[n];
     for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
        }
   printf("duplicate numbers are here:\n");
          for(int i=0 ; i<n ; i++){
         for(int j=i+1 ; j<n ; j++){
             if(arr[i] == arr[j]){
               printf(" %d\n",arr[i]);
              }
             }
           }
return 0;
}  */

//Create an array that stores first n even numbers. Take n as input from the user.

/*#include<stdio.h>
int main(){
    int n,i;
    printf("enter the size of array:");
    scanf("%d",&n);
    
    int a;  
    int arr[n];
     for(int j=0; j<n ;j++){
         if( a % 2 == 0){
        printf("%d\n",a);
        a+=2;
        }
       }
    
       return 0;
      }*/
      
//Create an array that stores first n odd numbers. Take n as input from the user.
/* #include<stdio.h>
int main(){
    int n,j;
    printf("enter the size of array:");
    scanf("%d",&n);
    
    int arr[n];
    
    int a=1;
     for(int j=0; j<n ;j++){
         if( a % 2 != 0){
        printf("%d\n",a);
       a+=2;
        }
       }
    
       return 0;
      }  */
      
//Create an array that stores all the factors of a number n. Take n as input from the user.

/*#include<stdio.h>
int main(){
    int n,j;
    printf("enter the number:");
    scanf("%d",&n);
    
    int arr[n];
  
  printf("Factors of %d:\n", n);
  
     for(int j=1; j<=n ;j++){
         if( n % j == 0){
        printf("  %d\n",j);
        }
     }
   
       return 0;
      }  */
      
 //Create an array that stores all the prime numbers up to n. Take n as input from the user. 
  
/*#include<stdio.h>
int main(){
    int n,i;
    printf("enter the number: ");
    scanf("%d",&n);
   
    int k=0;
  
       int arr[n]; 
    printf("Prime numbers up to %d:\n",n);
    
    for(int i=1;i<=n;i++){
          
          int count =0;
       for(int j=1; j<=i; j++){
          if( i % j == 0 ){
             count++;
             }
            }
           
              if( count == 2){
            arr[k] = i ;
            k++;
            }
           }
       for(int i=0 ; i<k; i++){
       printf("%d ",arr[i]);
          } 
         
         return 0;
        } */
 
// Create an array that stores perfect numbers up to n. Take n as input from the user.

/*#include<stdio.h>
int main(){
     int n,i,k=0;
     printf("enter the number: ");
     scanf("%d",&n);
     int arr[n];
    for(int i=1; i<=n; i++)
   {
          int sum = 0;
           for(int j=1; j<i; j++)
          {
             if(i%j == 0)
           {
             sum += j ;
           }
         }
          if( sum == i )
        {
       arr[k]=i;
       k++;
       
        }
         
  }
  for(int i=0; i<k; i++)
  printf("%d ",arr[i]);
  
     return 0;
    } */

//Create an array that stores Armstrong numbers up to n. Take n as input from the user.    
       
/* #include<stdio.h>
 #include<math.h>
 
 int main(){
    int n;                             
    printf("enter the number: ");
    scanf("%d",&n);
    
    int arr[n];
    int k=0;
    
   for(int i=1; i<=n; i++) {
       int j=i;
       int sum =0;
       int m=0;
        
      while (j > 0) {
            j /= 10;
            sum++;
       }

         j = i;

       
      while ( j > 0 ){
        int r = j % 10 ;
         m += pow(r,sum) ;
         j = j/10 ;
      }
     
       if(  m == i ){
       arr[k] = i;
       k++;
       }
     }
     
  printf("Armstrong numbers up to %d are: ",n);
   for(int i=0; i < k; i++){
     printf("%d ",arr[i]);
   }
  return 0;
 } */
   
   
//Create an array that stores the factorial of first n natural numbers. Take n as input from the user.

/*#include<stdio.h>

int main(){
     int n,i;
     printf("enter the number: ");
     scanf("%d",&n);
     
     int arr[n];
     int fact=1;
     
    for(int i=1; i<=n; i++)
      {
        fact = fact * i ;
        }
       printf("factorial of %d\n: %d ",n,fact);
  
   return 0;
  } */
  
//Write a program to create an array of 10 numbers from the user, and count the number of odd and even numbers.

/*#include<stdio.h>
   int main(){
       int arr[10];
       int i;
       int CountOdd = 0;
       int CountEven = 0;
       
    for(int i=0;i<10;i++){
    printf("enter number %d: ",i+1);
     scanf("%d",&arr[i]);

       if( arr[i]% 2 == 0 ){
           CountEven++;
        }
      else {
        CountOdd++;
   }
  }
  
  printf("Number of EVEN elements: %d\n",CountEven);
  printf("Number of ODD elements: %d\n",CountOdd); 
   
  return 0;
 } */
 
// Write a program to create an array of 10 numbers from the user, and sum the elements on odd positions as odds and on even positions as evens.

/*#include<stdio.h>

   int main(){
       int arr[10];
       int i;
       int OddPosSum = 0;
       int EvenPosSum = 0;
       
    for(int i=0;i<10;i++){
    printf("enter number %d: ",i+1);
     scanf("%d",&arr[i]);
     }
     
    for(int j=0;j<10;j++){
    
       if( j % 2 == 0 ){
           EvenPosSum += arr[j];
        }
      else {
        OddPosSum += arr[j];
   }
  }
  printf("sum of  odd position num: %d\n",OddPosSum); 
  
  printf("sum of even position num: %d\n",EvenPosSum); 
   
  return 0;
 } */
      
//Write a program to create an array of n items where n is input from the user. Then input n names from the user and add them to the array.

/*#include<stdio.h>
int main(){
    int n;
    int arr[n];
    char name[n][100];
    
    printf("enter the size of array:\n");
    scanf("%d",&n);
    
    printf("enter %d names\n:",n);
    for(int i=0; i<n; i++){
        printf("Name %d:",i+1);
        scanf("%s",name[i]);
        }
        
    for(int i=0; i<n; i++){
        printf("%d. %s\n",i+1,name[i]);
        }
      return 0;
      } */

//In the flowchart of the above question, print the names input by the user in reverse order.

/*#include<stdio.h>
int main(){
    int n;
    int arr[n];
    char name[n][100];
    
    printf("enter the size of array:\n");
    scanf("%d",&n);
    
    printf("enter %d names\n:",n);
    for(int i=0; i<n; i++){
        printf("Name %d:",i+1);
        scanf("%s",name[i]);
        }
        
    for(int i=n-1; i>=0; i--){
        printf("%d. %s\n",i+1,name[i]);
        }
      return 0;
      } */

//Write a program to show how to rearrange the elements in an array so that they appear in reverse order.

/*#include<stdio.h>
int main(){
    int n;
    
    printf("enter the size of array:");
    scanf("%d",&n);
    
     int arr[n];
    
    printf("enter %d numbers:\n",n);
    for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
    }
     
   printf("reverse order: \n");
   
  for(int j=n-1; j>=0; j--){
  printf("%d\n",arr[j]);
  }

return 0;
} */

//Write a program to input n numbers from the user. Store them in an array, Then show how to determine the maximum number.

/*#include<stdio.h>
int main(){
    int n;
    
    printf("enter the size of array: ");
    scanf("%d",&n);
    
    int arr[n];
    
    printf("enter %d numbers:\n",n);
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    
    int max =0;
    printf("maximum number: \n");
    
    for(int i=0;i<n;i++){
       if(arr[i] > max){
         max = arr[i];
         }
        }
     printf("%d",max);
     
     return 0;
    } */
    
//Write a program to show how to store the first 100 natural numbers in an array and then show them in the reverse sequence.

/*#include<stdio.h>
int main(){
    int arr[100];
    int i=0;
    
    printf("enter 10 numbers:\n");
    for(int i=0;i<100;i++){
       scanf("%d",&arr[i]);
    }
    
    printf("reverse: \n");
    
    for(int i=100-1;i>=0;i--){
       printf("%d\n",arr[i]);
       }
       return 0;
      } */
      
//In a certain hospital, the weights of newborn babies are recorded each month and then processed at the end of the month to determine the following:  1. mean weight of the babies 2. maximum of the weights 3. minimum the weights. Write a program to show how the weights can be stored as an array first and then processed to determine the desired outputs. Input n from the user where n is number of babies born in a particular month.
  
 /* #include<stdio.h>
  int main(){
  int n;
  
  printf("enter the number of babies: ");
  scanf("%d",&n);
  
   int weight[n];
   printf("enter the weight:%d\n ",n);
   for(int i=0;i<n;i++){
   scanf("%d",&weight[i]);
   }
   
       int sum=0;
   
   for(int i=0;i<n;i++){
      sum += weight[i];
      }
   float mean = sum / n ;
   
   int max = weight[0]; 
   for(int i=1;i<n;i++){
      if(weight[i] > max){
         max = weight[i];
         }
        }
         
   int min = weight[0];
   for(int i=1;i<n;i++){
      if(weight[i] < min){
         min = weight[i];
         }
        }
        
    printf("mean weight: %2f\n",mean);
    printf("max weight: %d\n",max);
    printf("min weight: %d\n",min);
    
    return 0;
   } */
   
///////////////////////////////////////////////////////////////////////////////
   
// In a certain city, the maximum and the minimum temperatures on each day are recorded each month to determine the following at the end of the month: 1. mean maximum temperature in the month 2. mean minimum temperature in the month 3. highest maximum temperature 4. lowest minimum temperature 5. hottest day number of the month 6. coldest day number of the month. Draw a flowchart to show how the desired result can be obtained. Input n from the user where n is number of days.  
 
/*#include<stdio.h>
 int main(){
     int n;
     
     printf("enter the number of days: ");
     scanf("%d",&n); 
     
     int maxTemp[n] , minTemp[n];
     int sumMax=0 , sumMin=0;
     int highestMax = -1000;
     int lowestMin = +1000;
     int hottestDay, coldestDay; 
     int dayNumber[n];   
   
        for( int i = 0;i<n;i++){
     printf("enter the maximum temprature for day %d\n: ",i+1);
      scanf("%d",&maxTemp[i]);
      
      printf("enter the minimum temprature for day %d\n: ",i+1);
      scanf("%d",&minTemp[i]);
      
      dayNumber[i] = i+1;
        
       sumMax += maxTemp[i];
       sumMin += minTemp[i];
       
       if(maxTemp[i] > highestMax){
          highestMax = maxTemp[i];
          hottestDay = dayNumber[i];
          }
      
      if(minTemp[i] < lowestMin){
        lowestMin = minTemp[i];
        coldestDay =dayNumber[i];
        }
      }
      
    float meanMax = sumMax/n;
    float meanMin = sumMin/n;
    
      
    printf("mean maximum temperature in the month: %2f\n ",meanMax);
    
     printf("mean minimum temperature the month: %2f\n ",meanMin);
     
     printf("highest maximum temperature in the month: %d\n ",highestMax);
     
      printf("lowest minimum temperature in the month: %d\n ",lowestMin);
      
       printf("hottest day temperature in the month: %d\n ",hottestDay);
       
       printf("coldest day  temperature in the month: %d ",coldestDay);
      
      return 0;
      } */
      
      
      
      
  



