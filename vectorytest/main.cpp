//
//  main.cpp
//  vectorytest
//
//  Created by   李也 on 2018/10/27.
//  Copyright © 2018年   李也. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //向量定义
    vector<int> vec_a;
    vector<int> vec_b(1);
    vector<int> vec_c(6,0);
    
    //增加元素
    vec_a.push_back(20);
    vec_a.push_back(10);
    
    
    
    //获得元素
    cout<< "通过下标获得元素：" << vec_a[0] << endl;
    cout << "通过下标获得元素 at:"<<  vec_a.at(0) <<endl;
    
    //获取队首元素、队尾元素
    cout << "获得队首元素：" << vec_a.front()<<endl;
    cout << "获得队尾元素："<< vec_a.back()<<endl;
    
    //清除与元素
    vec_a.clear();
    vec_a.erase(vec_a.begin(),vec_a.end());
    
    //删除元素
    vec_a.pop_back();
    
    //获得容量
    
    cout << "获得容量 " << vec_a.capacity()<< endl;
    
    //清除容量
    vector<int> a;
    a.swap(vec_a);
    
    cout << "获得容量 " << vec_a.capacity()<< endl;
    
    
    
    return 0;
}

