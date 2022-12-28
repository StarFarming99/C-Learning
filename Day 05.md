# Day 05

1. Constructors

```c++
class Entity
{
public:
    float X,Y;
	void Init()
    Entity()//name must be same as the class
    {
        X = 0.0f;
        Y = 0.0f;
    }
    
    Entity(float x, float y)//we can init it when create an object
    {
        X = x;
        Y = y;
    }
    
    void Log()
    {
        cout<<X<<","<<Y<<endl;
    }
};
```

2. Destructors

```c++
~Entity()//dont need to write
{
    cout << "Destoryed Entity!" <<endl;
}
```



3. Inheritance

```c++
//avoid code duplication
class Player : public Entity
{
    //copy everything that is not private
};
```



4. Virtual Functions(虚函数)

```c++
//overwrite functions
class Entity
{
public:
    virtual std::string GetName() { return "Entity"; }//generate a vtable, so that it can be overwritten
};

class Player : public Entity
{
private:
    std::string m_Name;
    
public: Player(const std::string& name)
    		: m_Name(name) {}
            
    std::string GetName() override { return m_Name; }//override
};
```



5. Interfaces(pure virtual function)

```c++
class Entity
{
public:
    virtual std::string GetName() = 0;//pure, you can not call this
};//to guarantee that every class has this function 
```



6. Visibility

```c++
//private, protected, public
```

类的public成员可以被任意实体访问，你可以认为它就是c语言中的struct结构体，可以直接用a.x这种形式访问；
类的private成员不能直接被类的实体访问，也不能被子类的实体访问，但是可以被类的成员函数访问；
类的protected成员不能直接被类的实体访问，但是可以被子类访问，也可以被类的成员函数访问；