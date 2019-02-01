/*
* Parker Zimmerman
* Assignment 1
* Array Indexing
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX_NUMBERS 500

/*
* initialize n elements of numbers array to -1
*/
void init_numbers(int n, int *numbers)
{
    for (int i = 0; i < n - 1; i++)
    {
        numbers[i] = -1;
    }
}
/*
* read numbers from stdin
*/
int read_numbers(int *numbers)
{
    int num = 0;
    printf("How many numbers would you like to compare? \n");
    scanf("%d", &num);

    init_numbers(MAX_NUMBERS, numbers);

    for (int i = 0; i < num; i++)
    {
        printf("please enter a number: ");
        scanf("%d", &numbers[i]);
    }

    return num;
}
/*
* print n elements of given array
*/
void print_numbers(int n, int *numbers)
{
    for (int j = 0; j < n - 1; j++)
    {
        printf("%d, ", numbers[j]);
    }
    printf("%d", numbers[n - 1]);
}
/*
 * find max from first n numbers in given array
 */
int find_max(int n, int *numbers)
{
    int max = numbers[0];

    for (int i = 1; i < n; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    return max;
}

int main()
{
    int numbers[MAX_NUMBERS];

    int num = read_numbers(numbers);

    printf("The max of the list ");
    print_numbers(num, numbers);
    printf(" is %d \n", find_max(num, numbers));

    return 0;
}