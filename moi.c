#include<stdio.h>
#include<string.h>
struct Student {
     char Name[100];
    int Age;
};

int main(){
  struct Student s1;
    strcpy(s1.Name, "bao ngoc");
    s1.Age = 19;
    printf("Name:%s\n",s1.Name);
    printf("Age : %d",s1.Age);
    return 0;
}
