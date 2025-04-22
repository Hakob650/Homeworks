#include <stdio.h>
int main() {
    int n;
    int lucky=1;
    printf("lucky");
    scanf("%d",&n);
    while (n != 0){
        int d=n%10; 
        if (d!=4&&d!=7){
            lucky=0;  
            break;
        }n/=10; 
    }
    if (lucky) {
        printf("tivy hajoxak e\n");
    } else {
        printf("tivy hajoxak che\n");
    } return 0;
}

