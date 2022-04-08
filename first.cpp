 #include <iostream>
int main()
{
    int a = 10, b = 20, c;

    std::cout << "\n a:" << a;
    std::cout << "\n b:" << b;
    std::cout << "\n a+b:" << a + b;
    c = a + b;
    std::cout << "\n a+b:" << c;
    std::cout << "\n a" << c + b + a;
}