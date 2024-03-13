#include <stdio.h>
struct stu
{
    int a;
    float b;
    char name[50];
};

int main() {
    struct stu E1;
    E1.a=10;
    E1.b=10.5;
    strcpy(E1.name,"kamalini");
    printf("%d,%.2f,%s",E1.a,E1.b,E1.name);

    return 0;
}
