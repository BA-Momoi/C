#include<stdio.h>
#include<string.h>
typedef struct {
    char name[20];
    int id;
}Employee;
void emp_sort(Employee employee[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(employee[j].id>employee[j+1].id){
                Employee temp=employee[j];
                employee[j]=employee[j+1];
                employee[j+1]=temp;
            }
        }
    }
}
int main()
{
    Employee employee[10];
    int n=10;
    for(int i=0;i<n;i++){
        printf("请输入职工name:");
        fgets(employee[i].name,20,stdin);
        printf("请输入职工id:n");
        scanf("%d",&employee[i].id);
        getchar();
    }
    emp_sort(employee,n);
    for(int i=0;i<n;i++){
        printf("职工%sID:%d\n",employee[i].name,employee[i].id);
    }
    
    return 0;
}
