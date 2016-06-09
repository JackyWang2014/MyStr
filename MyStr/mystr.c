

//
//  mystr.c
//  MyStr
//
//  Created by WangQitai on 16/6/8.
//  Copyright © 2016年 WangQitai. All rights reserved.
//

#include "mystr.h"

int mystrlen1(char * source)
{
    int i;
    for (i = 0; source[i] != '\0'; i++);
    return i;
}

int mystrlen2(char * source)
{
    int count = 0;
    
    while (*source) {
        count++;
        source++;
    }
    return count;
}

int mystrlen3(char * source)
{
    int count = 0;
    
    for (; *source; source++) {
        count++;
    }
    return count;
}

char * mystrcat3(char * source, char * catstr)
{
    
    char * r = source;
    while (*source){
        source++;
    }
    
    while ((*source++ = *catstr++));
    
    return r;
    
    
}

char * mystrcat2(char * source, char * catstr)
{
    
    char * r = source;
    while (*source++);
    source--;
    while ((*source++ = *catstr++));
    
    return r;
    
    
}

char * mystrcat1(char * source, char * catstr)
{
    char * r = source;
    for (; *source; source++);
    for (; (*source++ = *catstr++); ) {
        
    }
    return r;
}

char * mystrcpy1(char * source, char * cpystr)
{
    char * r = source;
    for (; (*source++ = *cpystr++); );
    return r;
}

char * mystrcpy2(char * source, char * cpystr)
{
    char * r = source;
    while ((*source++ = *cpystr++));
    return r;
}

int mystrcmp1(char * dststr, char * source)
{
    
    for (;*source &&*dststr &&*source == *dststr;source++,dststr++ );
   
    return * dststr - * source;
}

int mystrcmp2(char * dststr, char * source)
{
    while (*source && *dststr && *source == *dststr) {
        source++;
        dststr++;
    }
    return * dststr - * source;
}

