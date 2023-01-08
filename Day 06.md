# Day 06

### 1. Arrays

a collection of variables.

Having many variables in one.

```c++
int example[5];
int* ptr = example;
*(ptr + 2) = 6;//example[2] = 6
example[0] = 7;
example[4] = 8;

int* another = new int[5];
delete[] another;

int a[5];
int count = sizeof(a) / sizeof(int);//how many elements in the list

//usually:
static const int size = 6;
int a[size];//size must be known by the compiler
```

