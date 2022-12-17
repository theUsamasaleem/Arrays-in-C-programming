#include <stdio.h>  

//Q1 Write a program in C to store 10 elements in an array and print it.
void  main()  
{  
    int arr[10]; 
    int i;  
  
    printf("Input 10 elements in the array :\n");  
    for(i=0; i<10; i++)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
  
    printf("\nElements in array are: ");  
    for(i=0; i<10; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 
    printf("\n");	
}

//Q2 Write a program in C to find the maximum and minimum element in an array.

void main()
{
    int arr1[100];
    int i, mx, mn, n;
	
	
       printf("\n\nFind maximum and minimum element in an array :\n");
       printf("--------------------------------------------------\n");	

       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }


    mx = arr1[0];
    mn = arr1[0];

    for(i=1; i<n; i++)
    {
        if(arr1[i]>mx)
        {
            mx = arr1[i];
        }


        if(arr1[i]<mn)
        {
            mn = arr1[i];
        }
    }
    printf("Maximum element is : %d\n", mx);
    printf("Minimum element is : %d\n\n", mn);
}

//Q3 Write a program in C to copy the elements of one array into another array.

#include <stdio.h>

void main()
{
    int arr1[100], arr2[100];
    int i, n;
	
	
       printf("\n\nCopy the elements one array into another array :\n");
       printf("----------------------------------------------------\n");
	   
       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
    /* Copy elements of first array into second array.*/ 
    for(i=0; i<n; i++)
    {
        arr2[i] = arr1[i];
    }

    /* Prints the elements of first array   */
    printf("\nThe elements stored in the first array are :\n");
    for(i=0; i<n; i++)
    {
        printf("% 5d", arr1[i]);
    }

    /* Prints the elements copied into the second array. */
    printf("\n\nThe elements copied into the second array are :\n");
    for(i=0; i<n; i++)
    {
        printf("% 5d", arr2[i]);
    }
	       printf("\n\n");
}

//Q4 Write a program in C to merge two arrays of same size sorted in descending order.

#include <stdio.h>

void main()
{
    int arr1[100], arr2[100], arr3[200];
    int s1, s2, s3;
    int i, j, k;
	
	
       printf("\n\nMerge two arrays of same size sorted in decending order.\n");
       printf("------------------------------------------------------------\n");	
	   
       printf("Input the number of elements to be stored in the first array :");
       scanf("%d",&s1);
   
       printf("Input %d elements in the array :\n",s1);
       for(i=0;i<s1;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }


       printf("Input the number of elements to be stored in the second array :");
       scanf("%d",&s2);
   
       printf("Input %d elements in the array :\n",s2);
       for(i=0;i<s2;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr2[i]);
	    }

    /* size of merged array is size of first array and  size of second array */
    s3 = s1 + s2;
/*----------------- insert in the third array------------------------------------*/
    for(i=0;i<s1; i++)
        {
            arr3[i] = arr1[i];
         }
     for(j=0;j<s2; j++)
        {
            arr3[i] = arr2[j];
            i++; 
        }
/*----------------- sort the array in decending order ---------------------------*/
   for(i=0;i<s3; i++)
        {
           for(k=0;k<s3-1;k++)
             {
         
                if(arr3[k]<=arr3[k+1])
                 {
                   j=arr3[k+1];
                   arr3[k+1]=arr3[k];
                   arr3[k]=j;
                 }  
              }
         }                      

/*--------------- Prints the merged array ------------------------------------*/
     printf("\nThe merged array in decending order is :\n");
    for(i=0; i<s3; i++)
    {
        printf("%d   ", arr3[i]);
    }
	printf("\n\n");
}

//Q5 Write a program in C to count the frequency of each element of an array.

#include <stdio.h>

void main()
{
    int arr1[100], fr1[100];
    int n, i, j, ctr;
	
	
       printf("\n\nCount frequency of each element of an array:\n");
       printf("------------------------------------------------\n");	

       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
		  fr1[i] = -1;
	    }
    for(i=0; i<n; i++)
    {
        ctr = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr1[i]==arr1[j])
            {
                ctr++;
                fr1[j] = 0;
            }
        }

        if(fr1[i]!=0)
        {
            fr1[i] = ctr;
        }
    }
    printf("\nThe frequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(fr1[i]!=0)
        {
            printf("%d occurs %d times\n", arr1[i], fr1[i]);
        }
    }
}


//Q6 Write a C program which converts a decimal (base 10) number into binary (base 2). Store this number in any array which will be printed to screen (console).

// convert binary to decimal

#include <stdio.h>
#include <math.h>

// function prototype
int convert(long long);

int main() {
  long long n;
  printf("Enter a binary number: ");
  scanf("%lld", &n);
  printf("%lld in binary = %d in decimal", n, convert(n));
  return 0;
}

// function definition
int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}

