#include <iostream>
int v1 = 0, v2 = 0;
int main(){
    std::cout << "请输入两个数字";
    std::cin >> v1 >> v2;
    std::cout << "sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
}