#include <stdio.h>
int main()
{
   int numbers[20] = {2,25,30,37,48,59,68,75,80,89};
   int low=0,high=9,mid,search;
   printf("Enter the number you need to search:");
   scanf("%d", &search);
   while(low<=high) {
    mid = (low+high)/2;
    if(search<numbers[mid]) {
      high = mid - 1;
    }
    else if(search>numbers[mid]) {
       low = mid + 1;
    }
    else {
        printf("The number is located in %d\n indices", mid);
        return 0;
    }
}
   printf("The number is not present in the array");
   return 0; 
   }