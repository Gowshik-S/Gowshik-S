#include <stdio.h>
int main()
{
    int n,rep,usi,i;
    printf("how many numbers youre going to enter:");
    scanf("%d", &n);
    int numbers[n];
    for(i=0;i<n;i++) {
        scanf("%d", &numbers[i]);
    }
    printf("which number you are going to insert:");
    scanf("%d", &rep);
    printf("In which indices you are going to insert:");
    scanf("%d", &usi);
    for(i=n;i>usi-1;i--) {
        if(i == usi) {
            numbers[i] = rep;
            printf("Successfully added the number\n");
            printf("Here the revised numbers list");
            for(i=0;i<n+1;i++) {
                printf("\n%d\t", numbers[i]);
            }
            break;
        }
        else{
            numbers[i] = numbers[i-1];
        }
        }
return 0; }