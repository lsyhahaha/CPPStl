//
// Created by 98708 on 2022-03-13.
//        string
//        vector
//        list
//        set / multiset
//        map / multimap
//        stack queue /
//        priority_queue pair
//        STL 算法 <algorithm> sort等
//        迭代器 iterator 、reverse_iterator
//

#include "demo01.h"
#include <iostream>
using namespace std;

void show_string() {
    // 创建一个string对象
    string s = "hello world";
    // 学习string的相关属性
    cout << " string s 的数据类型为：" << typeid(s).name() << endl;
    int length = s.length();
    int size = s.size();
    bool  flag = s.empty();
    sort(s.begin(), s.end());
    cout << length << " " << size << " " << flag << endl;
    cout << s << endl; // 按照字典序排序， 如果有空格，空格排在最前面

    // 类型判断
    if (typeid(s[0]) == typeid(char)) {
        printf("string的每个索引位的对象类型为char。\n");
    }
    //  学习string的遍历
    for (int i = 0; i < length; i++) {
        char a = s[i];
        cout << a;
    }
    // 学习string的相关操作
    // ①插入
    string a = "!!!";
    s.insert(s.end(), a.begin(), a.end());
    cout << "在s指定位置插入另外一个字符串：" << s << endl;
    // ②某个字符是否存在
    int index = s.find("a");
    cout << "判断在字符串中是否包含另外一个字符，包含就返回index,否则是-1"<< index << endl;
//    cout << s.find("hello") << endl; 切记不要这样直接打印，这样打印出来的结果是存储变量的地址
    // ③截取字符串的一部分，复制子字符串
    // 参数：第一个参数是起始索引
    // 第二个参数是子字符串长度
    s.substr(1,6);
    cout << s.substr(1,6) << endl;
}


int main() {
    system("chcp 65001");
    show_string();
    return 0;
}