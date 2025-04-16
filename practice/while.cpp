//用于控制流，改变运行顺序
//while-达到条件前重复执行一段代码
#include <iostream>
int main()
{
    std::cout << "计算50递增到100的所有整数的和\n";
    int sum = 0, num = 50;
    while (num <= 100){
        sum += num;//sum + num,然后保存
        ++num;
    }
    std::cout << "sum of 50 ~ 100 is: " << sum << std::endl;

    std::cout << "输出10递减到0的所有整数\n";
    num = 10;
    while (num >= 0){
        std::cout << num << "\n";
        --num;
    }
    //用if..else互斥地限制条件
    int num1;
    std::cout << "输出两个整数指定范围内的所有整数\n"
              << "请输入两个用空格分开的数字";
    std::cin >> num >> num1;
    if(num <= num1){
        while (num <= num1){
            std::cout << num << "\n";
            ++num;
        }
    }else{
        while(num >= num1){
            std::cout << num << "\n";
            --num;
        }
    }
    return 0;
}