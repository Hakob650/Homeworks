#include <stdio.h>
int main(){
int seconds,minutes,hours,remain_seconds;
printf("Enter the number of seconds:");
scanf("%d",&seconds);
hours=seconds/3600;
seconds=seconds%3600;
minutes=seconds/60;
remain_seconds=seconds%60;
 printf("%d seconds is equal to %d hours, %d minutes, and %d seconds.\n", seconds, hours, minutes,remain_seconds);
return 0;
}
