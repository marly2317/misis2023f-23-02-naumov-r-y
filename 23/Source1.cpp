#include <iostream>

int main() {
    int x = 42, y = 13;
    int* ptr;  // �� ��������� �� ����������������, ��� ����� ���������� �����
    ptr = nullptr;  // �������� ���������
    ptr = &x;  // ������ � ptr ����� ����� ���������� x
    std::cout << ptr<<"\n";
    std::cout << *ptr << "\n";  // 42
    ptr = &y;  // ����� �������� �����, ���������� � ptr
    std::cout << *ptr << "\n";  // 13
}