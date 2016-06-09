//
//  mystr.h
//  MyStr
//
//  Created by WangQitai on 16/6/8.
//  Copyright © 2016年 WangQitai. All rights reserved.
//

#ifndef mystr_h
#define mystr_h

#include <stdio.h>
char * mystrcat3(char * source, char * catstr);
char * mystrcat2(char * source, char * catstr);
char * mystrcat1(char * source, char * catstr);
int mystrlen1(char * source);
int mystrlen2(char * source);
int mystrlen3(char * source);
char * mystrcpy1(char * source, char * cpystr);
char * mystrcpy2(char * source, char * cpystr);
int mystrcmp1(char * dststr, char * source);
int mystrcmp2(char * dststr, char * source);
char * mystrncpy(char * source, char * dststr);
#endif /* mystr_h */
