/*Eva is at (3, 4) on a 2D grid, and Angel is at an unknown point (x, y). They want to find the Euclidean distance between them. Write a program taking Angel's coordinates as input and using built-in mathematical functions to output the distance.



Formula: distance = sqrt((x - 3)2 + (y-4)2) 



Note: The program should utilize built-in mathematical functions, pow and sqrt, for accurate calculation of the Euclidean distance.

Input format :
The input consists of two space-separated integers, x and y, representing the coordinates of Angel's location.

Output format :
The output displays a single integer representing the Euclidean distance between Eva and Angel.
*/

// You are using GCC
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    
    double distance =sqrt(pow(x-3,2)+ pow(y-4,2));
    
    printf("1f\n",distance);
    return 0;
}
