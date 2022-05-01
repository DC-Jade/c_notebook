# c_notebook

## Introduction
- This is a Linux c programming learning notebook
- Ref:
[Linux C编程一站式学习](https://linux-c-learning-all-in-one.readthedocs.io/zh_CN/latest/index.html)\
[C语言程序设计](https://book.douban.com/subject/1139336/)

## Supported

- os
  - Ubuntu 16.04 LTS
- compiler
  - gcc version 9.4.0

## char

- char is a short integer, only 1B(8 bit)

- type conversion(or typecasting)

  ```C
  int a = '1' - '0'	/* char int to digit */
  printf("%d\n", a);
  ```

- char array, refers array storing chars

    ```C
    char ca[];
    ```

## pointer\*

- void * can be casted to any pointer without losing information

- pointer is a variable, hexademical int, different to array name

  ```C
  int ia[4] = {0, 1, 2, 3};
  int *pa = ia;
  pa++	/* right */
  ia++	/* wrong, only variable can*/
  ```

## Struct

-   Store many different type variables

    ```C
    struct Pointer {
        int x = 0;
        int y = 0;
    };	/* struct Pointer */
    struct Pointer p;	/* instantiation */
    ```
    

## function()

-   function returning a pointer

    ```C
    Void *fun(int);
    ```

-   pointer to a function

    ```C
    void (*pfun) (int);
    ```

-   function parameter

    ```C
    void fun(char s[]);
    void fun(char *s);	/* char s[] same as char *s and char *s mostly used */
    ```

## array[]

-   pointer array, refers to array storing pointers

    ```C
    int *ia[100];
    char *ca[100] = {"string", "hello", "world"};	/* mostly used to save string */
    printf("%s %s %s\n", ca[0], ca[1], ca[2], ca[3]);
    ```

-   pointer to an array

    ```C
    int (*pa)[100];
    ```

-   array name, refers to a pointer to the first element of array

    ```C
    int ia[10]; 
    printf("%p %p", ia, &ia[0])  /* ia same as &ia[0]; */
    ```

-   index, refers to dereference address

    ```C
    /* ia[i] same as *(ia + i) */
    ```
    
    

