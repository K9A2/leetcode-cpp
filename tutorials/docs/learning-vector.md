# learning vector

vector 封装了只能在后部插入和删除的动态数组。通过 '#include <vector>' 引入。

## 常用迭代器

begin() 和 end()，rbegin() 和 rend()。

迭代器的使用和 map 等不同。vector 的迭代器没有 first 和 second 之分，用 *iterator 来获取迭代器的值。

## 容量相关方法

主要有 size() 和 empty() 两个。

size() 返回当前 vector 的大小

empty() 确定当前 vector 是否为空

## 读写元素

可以使用 [] 和 at 来读写元素。

[] 下标从 0 开始计算

at 下标从 0 开始计算

front 返回第一个元素

back 返回最后一个元素

## 修改元素

push_back()

pop_back()

insert()

erase()

clear()

swap()

## 常用操作

```cpp
/* 初始化 */
vector<int> myvector;
vector<int>::iterator it = myvector.begin();
/* 添加元素 */
myvector.push_back(1);
/* 获取元素 */
myvector.back();
/* 弹出最后一个元素 */
myvector.pop_back();
```
