# Day 3

### 1. Loops

- for:

```c++
for (int i = 0; i < 5; i++){
    std::cout << "Hello world!"<<std::endl; 
}
```

- while

```c++
int i = 0;
while (i < 5){
    std::cout << "Hello world!"<<std::endl;
    i++;
}
```

- do while

```c++
do{//execute at least once;
    
}
while(condition){
    
}
```

### 

### 2. Control flows

- continue: skip to the next loop.

- break: end the whole loop.

- return:  in main function must return value. over the program.



### 3. Pointers

raw pointers: integer to store the memory address.

```c++
void* ptr = 0;//invaild address, (NULL)
int var = 8;
void* ptr1 = &var;//get the address of var
int* ptr1 = &var;//get the address of var, no difference with the previous line
//types donnot matter
*ptr1 = 10;//only int* ptr1 can be 赋值, var changed from 8 to 10

char* buffer = new char[8];//allocate memory
memset(buffer,0,8);//这段memory的前8位设置为0
char** ptr = &buffer;
delete[] buffer;
```



### 4. References

extension of pointers.

```c++
int a = 5;
int& ref = a;//not a variable
ref = 2;//change a to 2

void increment(int& value){
    value++;
}
int main(){
    int a = 5;
    increment(a);//ref works, -> a++ 
}
```



