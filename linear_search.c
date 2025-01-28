#include <stdio.h>
int main()
{
    int num[25] = {20,15,87,63,48};
    int search,i;
    printf("Which number you are going to search?");
    scanf("%d", &search);
    for(i=0;i<5;i++) {
        if(num[i] == search) {
             printf("The %d is present in %d indice", search, i);
            break;
        }
        }
        if(i == 5) {
            printf("The number is not present in this array");
        }

return 0;
}