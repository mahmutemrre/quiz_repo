#include <stdio.h>

struct Teacher{
    int id_number;
    char *name;
    int grad_year;
};

enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

extern int ex_declaration;

int add(int a,int b ){
    return a+b;
}

int main(){
    printf("Hello World\n");
    char c='a';
    int i = 5;
    int j = 9;
    int *ptr;
    int **ptop;
    void *vpt;
    int (*fptr)(int,int);
    float f=5.657;
    printf("my char is : %c\nmy integer is : %d\nmy float is : %f\n",c,i,f);


    struct Teacher t;
    t.grad_year=2004;
    t.name="Ayşe";
    t.id_number=2022400126;

    enum Day today = TUESDAY;
    printf("Today is day number %d\n", today);
    
    ptr=&i;
    ptop=&ptr;
    vpt=&i;
    fptr=&add;

    printf("%d\n",**ptop);
    printf("result is %d\n",fptr(i,j));

    return 0;
}
