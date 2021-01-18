#include<stdio.h>

int main (void)
{
    float score;
    int student,good,well,soso,bad;
    good=0;
    well=0;
    soso=0;
    bad=0;
    for (student = 0; student < 8; student++)
    {
    printf("请输入成绩：");
    scanf("%f",&score);
    if (score<=60)
    {
    printf("该同学不合格\n");    /* code */
    bad++;
    }
    else if (score>=60&&score<=70)
    {
    printf("该同学合格\n");
    soso++;
    }
    else if (score>=70&&score<=90)
    {
    printf("该同学良好\n");    /* code */
    well++;
    }
    else if (score>=90&&score<=100/* condition */)
    {
    printf("该同学优秀\n");    /* code */
    good++;
    }
    }
    printf("成绩优秀的人数：%d\n",good);
    printf("成绩良好的人数：%d\n",well);
    printf("成绩合格的人数：%d\n",soso);
    printf("成绩不合格的人数：%d\n",bad);
    return 0;
}