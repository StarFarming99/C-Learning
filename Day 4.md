# Day 4

1.  classes: object-oriented programming

```c++
class Player
{
public:
	int x, y;
    int speed;
    
    void Move(Player& player, int xa, int ya)
 {
    player.x += xa;
    player.y += ya;
 }
};


```



2. classes vs structs

Differences: visibility

classes are private by default, while structs are public.

compatible with c.



3. write a class

```c++
class Log
{
public:
    
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;
    
private:
    
    int m_LogLevel;
    
public:
    
    void SetLevel(int level)
    {
        m_LogLevel = level;
    }
    
    void Warn(const char* message)
    {
        std::cout<<"message"<<std::endl;
    }
    
};
```

4. static

for variables:

- outside a class: only can be linked in this translation unit(in the cpp file).
- inside a class: share the memory in the class. no longer class numbers. only one instance across all the instances. change others will change this one.

a static method doesn't have a class instance.(static method 不能调用别的变量) 除非提前在（）中定义好



5. enums

enumerations: give a name to a value.

```c++
enum Example ：unsigned char//has to be an integer
{
  A,B,C  //自动初始化为0，1，2，如果A被初始化为5，三个数为5，6，7
};

int main(){
    Example value = B;// only in A,B,C
}
```



