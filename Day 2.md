# Day 2

### Debug in C++

1. break points + f5 : go into the debug mode.

![image-20221223161010772](C:\Users\Zihang\AppData\Roaming\Typora\typora-user-images\image-20221223161010772.png)



![image-20221223161145841](C:\Users\Zihang\AppData\Roaming\Typora\typora-user-images\image-20221223161145841.png)

**step into**: step into the current function to see how it works

**step over**: pass the function

**step out**: jump out of the function

![image-20221223161712219](C:\Users\Zihang\AppData\Roaming\Typora\typora-user-images\image-20221223161712219.png)

**Watch** can help us check all the values of variables.

By checking the memory of the variables, if it is full of cc(hex), it is not initialized.

![image-20221223162037684](C:\Users\Zihang\AppData\Roaming\Typora\typora-user-images\image-20221223162037684.png)



By setting a break point and press continue, our program will go to the certain line.

![image-20221223162556374](C:\Users\Zihang\AppData\Roaming\Typora\typora-user-images\image-20221223162556374.png)





### Conditions and branches(if statements)

```c++
int x = 5;
bool comparisonResults = x == 5;
if (comparisonResult){
    func1();
}else if(){//if the previous if succeed, complier will not check 'else if'.
    func2();
}else{
    func3();
}
```

