/*
程序名称：百次方疯狂计算 version 1.0
本程序是遵守 GNU/LGPL 许可证发布的自由软件，您可以复制，修改或者重新发布它。许可证版本应当是第3版或者由您选择的更高版本。
发布本程序的目的是希望它有用，但是不包含任何担保，详情请参考GNU LGPL v3许可证原文。
版权所有(C)2016-2018 冰焰火灵X
<1079092922@qq.com>
*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{

double a,b,c,k;
x: 
printf("程序：百次方疯狂计算 v1，  By：冰焰火灵X");
a=1;
printf("欢迎使用，请输入您要的数字的百次方根：\n");
scanf("%lf",&a);
c=a+0; /*b用于记录循环次数的，c是用来显示结果的，a是用来定义根的。*/
b=1;
while(b<=99){
printf("本次结果=%lf\n",c);
b=b+1; /* 第一次循环，a乘c，就已经是二次方了，所以第一次将b定义为1，第一次循环的时候b恰好也是2，这样就会正确记录。 */
c=a*c;
}


printf("最终结果=%lf\n",c);


/*在此之下是程序重启的模块*/


s: /* 用于输入错误退回 */
k=0; /*输入前还原k的值*/
printf("您想再次进行计算吗？想的话请输入2，否则输入1:\n"); 
scanf("%lf",&k); /* 输入和记录已输入的k值 */
if(k==2){
goto x;}

else if(k==1){
return 0;}

else {
goto s;}
/*如果k是2则重启程序，如果k是1则退出。如果输入的错误则回退，要求重新输入。*/

}

