#include<stdio.h>
#include<math.h>
int main(void)
{
    double fx0,fx1,fx2,mid,x0,x1,x2;
    do{
    printf("请输入区间端点x0和x1:");
    scanf("%lf%lf",&x0,&x1);
    fx1=x1*((2*x1-4)*x1+3)-6;
    fx2=x2*((2*x2-4)*x2+3)-6;
    }while(fx1*fx2>0);
    do{
        x0=(x1+x2)/2;
        fx0=x0*((2*x0-4)*x0+3)-6;
        if(fx0*fx1<0){
        x2=x0;fx2=fx0;        
        }else{
            x1=x0;
            fx1=fx0;
        }
    }while(fabs(fx0)>=1e-5);
    printf("方程根为%6.2f\n",x0);
    return 0;
}
