#include <iostream>
#include <cassert>
using namespace std;

int f(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n; i++)
    {
        a = a + b;
        b = a - b;
    }
    return a;
}

void TestFirstElement(){
    int res = f(1);
    assert(res == 1);
    std::cout<<"TEST1--------------OK\n";
}
void TestElement(){
    int res = f(-2);
    assert(res == 0);
    std::cout<<"TEST2--------------OK\n";
}
void TestNewElement(){
    int res = f(500);
    assert(res == 315178285);
    std::cout<<"TEST3--------------OK\n";
}

int main()
{
    cout << "Ahafonova Myroslava" << "\n";
    TestFirstElement();
    TestElement();
    TestNewElement();
//    int n;
//    cin >> n;
//    cout << f(n) << "\n";
//    return 0;
}
