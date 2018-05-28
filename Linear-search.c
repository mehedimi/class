#include <stdio.h>

int main()
{
    int arr[40] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40 };
    int searchNumber = 0, i;
    printf("Enter your number to search it index: ");
    scanf("%d", &searchNumber);

    for(i = 0; i < 40; i++){
        if(searchNumber == arr[i]){
            printf("\nMatch found, Your searched number is: %d and index is: %d\n", arr[i], i);
            break;
        }
    }
    if(i == 40){
        printf("\nNo match found!\n");
    }
    return 0;
}
