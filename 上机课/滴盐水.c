//
//  main.c
//  滴盐水
//
//  Created by 顾梦寅Joyce on 2017/1/4.
//  Copyright © 2017年 顾梦寅Joyce. All rights reserved.
//挂盐水的时候，如果滴起来有规律，先是滴一滴，停一下；然后滴二滴，停一下；再滴三滴，停一下...，现在有一个问题：这瓶盐水一共有VUL毫升，每一滴是D毫升，每一滴的速度是一秒（假设最后一滴不到D毫升，则花费的时间也算一秒），停一下的时间也是一秒这瓶水什么时候能挂完呢？
//输入数据包含多个测试实例，每个实例占一行，由VUL和D组成，其中 0<D<VUL<5000。直到输入其中一个为0时，终止程序。

#include<stdio.h>
double D,V;
int T;
int main(){
    while(scanf("%lf%lf",&V,&D)!=EOF){
        if(V==0||D==0){
            break;
        }
        T=0;
        int t;
        for(t=1;V>0;t++){
            if(V-(t*D) <= 0){
                while(V>0) {
                    V=V-D;
                    T++;
                }
                break;
            }
            else{
                V=V-t*D;
                T=t+T;
                T++;
            }
        }
        printf("%d\n",T);
    }
    return 0;
}
