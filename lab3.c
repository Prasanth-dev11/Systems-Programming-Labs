#include <stdio.h>
#include<string.h>
#define MAX1 100
#define MAX2 1000
void readInput()
{
    int size=0;
    char inp[MAX1][MAX2];
    printf("Enter input. Enter 'end' to finish.\n");
    while (1)
    {

        fgets(inp[size], MAX2, stdin);
        // Remove newline character if present
        inp[size][strcspn(inp[size], "\n")] = '\0';
        if (strcmp(inp[size], "end") == 0)
            break;
        size++;
        if (size >= MAX1)
        {
            printf("Maximum number of strings reached.\n");
            break;
        }
    }
    //Insertion sort algorithm
    char *sort(char a[])
    {
       int i,j;
       char temp[20],temp2[20];
       for(i=1; i<size; i++)
       {
           j=i-1;
           strcpy(temp,inp[i]);
           while(j>=0)
           {
               if(strcmp(temp,inp[j])<0)
               {
                   strcpy(temp2,inp[j+1]);
                   strcpy(inp[j+1],inp[j]);
                   strcpy(inp[j],temp2);
               }
               j=j-1;
           }
       }
    }
    //Output printing
    void printOutput(char b[])
   {
       printf("After Sorting\n");
       for(int i=0; i<size; i++)
       {
           printf("%s\n", inp[i]);
       }
   }
    printOutput(sort(inp[size]));
}
//Main method
int main()
{
    readInput();
    return 0;
}
