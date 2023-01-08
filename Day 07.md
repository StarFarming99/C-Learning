# Day 07

### 1. Strings

a group of characters.

```c++
const char* name = "Starfarming";//cannot be changed
//" "->char pointer, ''->character
char name2[6] =  {'S','T','A','R','f','a'};//定位不了，打印不了
char name2[6] =  {'S','T','A','R','f','a'，0};//必修0结尾,string 才可以allocate
styd::cin.get();

//String class
#include <string>

int main(){
    std:: string name = "starfarming";
    name.size();
    name.append();
    std:: string name = std::("starfarming") + "hello!";
    bool contains = name.find("ing");//return 0 or 1
}
```



### 2. string literal(字符串字面量)  const char

```c++
const char name[8] = "Che\0rno";//中间就切了，因为null就结束了string
char*;
wchar_t* = L"starfarming";
char16_t*;
//string literal cannot append string by '+'
const char* name = "Starfarming";//cannot be changed

const char* ex = "line1\n"
    "line2\n"
    "line3";
```

