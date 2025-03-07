#include<stdio.h>
struct Student {
char name[50];
int age;
float marks;
};
void display(struct Student*s){
printf("\nStudent Details:\n");
printf("Name:%s",s->name);
printf("Age:%d",s->age);
printf("Marks:%.2f\n",s->marks);
}
int main(){
struct Student s1,*ptr;
 ptr=&s1;
 printf("enter students details:\n");
 printf("Name:");
 scanf("%s",ptr->name);
 printf("Age:");
 scanf("%d",&ptr->age);
 printf("Marks:");
 scanf("%f",&ptr->marks);
 display(ptr);
return 0;
}
