#include <stdio.h>
int main(){
    int d; 
    float f;
    char c;
    scanf("%d %f %c", &d, &f, &c);
    printf("%d %.2f %c", d, f, c);

    // what if user will input 10%
    int a, b;
    // way 1
    scanf("%d%% %d%%", &a, &b);
    printf("%d%% %d%%", a, b);
    // way 2
    int x, y;
    char e;
    scanf("%d%c %d%c", &x,&e, &y,&e);
    printf("%d%% %d%%", x, y);
    return 0;
}