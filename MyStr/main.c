//
//  main.c
//  MyStr
//
//  Created by WangQitai on 16/6/8.
//  Copyright © 2016年 WangQitai. All rights reserved.
//

#include <stdio.h>
#include "mystr.h"
#include <string.h>
int main(int argc, const char * argv[]) {
//    char a[] = "I love China";
//    char b[100];
//    char * mystr = mystrcpy2(b, a);
//    printf("%s\n", mystr);
    char s1[100] = "Iamgoaa";
    char s2[100] = "Iamgobs";
    int s = mystrcmp2(s1, s2);
    printf("%d\n",s);
    return 0;
}
