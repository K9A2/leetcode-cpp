# learning map

map 类使用 `#include <map>` 来引入。参考代码见源文件。

## 常用迭代器 Iterators

返回迭代器。迭代器的 first 字段是 key，second 字段是 value。

begin() 和　end() 是正向迭代器。

rbegin() 和 rend() 是反向迭代器。

## Capacity 类方法

empty()　确定 map 是否为空。

size() 求 map 的大小。

## 读写元素的方法

可使用 map[] 的方式读写元素。map.at() 的方式只能用来读取元素，如果读取一个不存在的元素，将抛出异常。

## 修改元素的方法

insert() 用来插入一个 key-value pair。

erase() 用来删除某个 key-value pair。

swap() 用来调换两个 map 里面的内容。

clear() 用来清除某个 map。

## 判断 map 中是否存在某元素的方法

find() 返回指定特定 key 的元素的迭代器。通常与 end() 配合确定 map 中是否存在某元素。

count() 返回指定元素的个数。如果存在则返回 1，不存在则返回 0。
