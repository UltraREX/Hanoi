#include <stdio.h>

void hanoi(int n , char X ,char Y, char Z)
{
  if(n == 1)
    printf("把%c移动到%c \n",X,Z);
  else
  {
    hanoi(n-1,X,Z,Y);
    printf("把%c移动到%c \n",X,Z);
    hanoi(n-1,Y,X,Z);
  }
}
main()
{
  int m;
  printf("请输入盘子的数目：");
  scanf("%d", &m);
  printf("要移动的盘子执行的步骤为：%d \n",m);
  hanoi(m,'A','B','C');
}
