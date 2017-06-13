//
//  main.c
//  num
//
//  Created by 20161104601 on 17/6/13.
//  Copyright © 2017年 20161104601. All rights reserved.
//

#include<stdio.h>
int main()
{
    int a[10];
    int i,j,t,temp;//temp记录临时中间值
    FILE *fr;
    FILE *fw;
    fw=fopen("//Users//a20161104601//Desktop//number2.pages","w+");
    for (i=0;i<10;i++)
    {
    fr=fopen("//Users//a20161104601//Desktop//name//name//number.pages","r+");

    }
    for (j=1;j<=9;j++)
    {
        t=10-j;
        for (i=0;i<t;i++)
        {
            if (a[i]>a[i+1]) {
                
                // 交换两数的位置
                
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        
    }
    for (i=0;i<=9;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}


