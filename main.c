#include <stdio.h>
int main()
{
    int Days, Y, W, D;

    printf("Enter Days: ");
    scanf("%d", &Days);

    Y = (Days/365);
    W = (Days%365)/7;
    D =  (Days%365)%7;

    printf("Years:Weeks:Days = %d:%d:%d\n",Y,W,D);

    return 0;
}
