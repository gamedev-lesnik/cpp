#include <iostream>

int main()
{
    int a = 3;
    int b = 5;

    int result_and = a & b; // 0011 and 0101 = 0001 (1)
    std::cout << "0011 and 0101 = " << result_and << std::endl;

    int result_or = a | b; // 0011 or 0101 = 0111 (7)
    std::cout << "0011 and 0101 = " << result_or << std::endl;

    int result_xor = a ^ b; // 0011 xor 0101 = 0110 (6)
    std::cout << "0011 and 0101 = " << result_xor << std::endl;

    int result_not = ~a;
    std::cout << "~a = " << result_not << std::endl;

    int resutlt_move_left = a << 1;
    std::cout << "a << 1 = " << resutlt_move_left << std::endl;
    
    int resutlt_move_right = a >> 1;
    std::cout << "a >> 1 = " << resutlt_move_right << std::endl;
    return 0;
}
