#include <iostream>
using namespace std;

int main() {
  
  	// while loop to print numbers from 1 to 5
    int i = 0; // กำหนดค่าเริ่มต้นของตัวแปร i เป็น 0
    while (i < 5) { // ทำงานไปเรื่อยๆในขณะที่ i น้อยกว่า 5
        cout << "Hi  => i = " << i << endl; // แสดงข้อความพร้อมค่าของ i
        i++; // i = i + 1 (เพิ่มค่า i ทีละ 1)
    }

    return 0; // จบการทำงานของโปรแกรม
}