#include <iostream>

class A
{
public:
    A(int n = 0)
        : m_n(n)
    {
        std::cout << 'd';
    }

    A(const A& a)
        : m_n(a.m_n)
    {
        std::cout << 'c';
    }

private:
    int m_n;
};

void f(const A &a1, const A &a2 = A())
{
}

int main()
{
    A a(2), b;
    std::cout << '1';
    const A c(a);
    std::cout << "1a";
    const A &d = c;
    std::cout << "1b";
    const A e = b;
    std::cout << '2';
    b = d;
    std::cout << '3';
    A *p = new A(c), *q = &a;
    std::cout << '4';
    static_cast<void>(q);
    std::cout << '5';
    delete p;
    std::cout << '6';
    f(3);
    std::cout << std::endl;

    return 0;
}
