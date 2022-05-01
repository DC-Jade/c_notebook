# c_notebook

## Introduction
- This is a Linux c programming learning notebook
- Ref:
[Linux C编程一站式学习](https://linux-c-learning-all-in-one.readthedocs.io/zh_CN/latest/index.html)
[C语言程序设计](https://book.douban.com/subject/1139336/)

## Supported

- os
  - Ubuntu 16.04 LTS
- compiler
  - gcc version 9.4.0

## char

- char is a short integer, only 1B(8 bit)
- type conversion(or typecasting)
  1. char to int
      'c' - '0'

## pointer\*

- void * can be casted to any pointer without losing information
- pointer is just a hexademical int, which is an adress in memery
- 

## Struct

-   Store many different type variables

## function()

-   function returning a pointer

    Void *fun(int);

-   pointer to a function

    void (*pfun) (int);

## array[]

-   array storing pointers

    int *ia[100];

-   pointer to an array

    int (*pa)[100];

-   array name, refers to a pointer to the first element of array

    int ia[];

    ia same as &ia[0];

-   index, refers to dereference address

    ia[i] same as *(ia + i);

