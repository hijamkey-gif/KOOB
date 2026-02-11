#ifndef SINGLETON_H
#define SINGLETON_H
#include "global.h"

template<typename T>
class Singleton{
protected:
    Singleton() = default;
    Singleton(const Singleton<T>&) = delete;
    Singleton<T>& operator = (const Singleton<T>&) = delete;
    static std::shared_ptr<T> _instance;
public:
    //从C++11开始，尽管多个线程调用，函数局部静态变量的初始话也保证只发生一次
    static std::shared_ptr<T> GetInstance(){
        static std::once_flag s_flag;
        std::call_once(s_flag,[&](){
            //这里不使用make_shared是因为需要调用构造函数，这里的构造被私有了
            _instance = std::shared_ptr<T>(new T);
        });
        return _instance;
    }
    // void PrintAddress(){
    //     std::cout << _instance.get() <<std::endl;
    // }
    ~Singleton(){
        std::cout << "Singleton destruct!" <<std::endl;
    }
};

template<typename T>
std::shared_ptr<T> Singleton<T>::_instance = nullptr;

#endif // SINGLETON_H
