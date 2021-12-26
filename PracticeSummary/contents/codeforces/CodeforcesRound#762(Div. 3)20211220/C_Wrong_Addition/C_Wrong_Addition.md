## C_Wrong_Addition
#### 笔记标签：  
dubug
#### 题目标签：  
模拟 ｜ 双指针
#### 题目链接：  
[C_Wrong_Addition](https://codeforces.com/contest/1619/problem/C)
#### 思路总结：  
>  从数的两端取数字进行对比看是否是两个个位数相加而成的数字,向目标向量的尾部添加ss-aa的值即可
***
> 添加过程中应考虑以下两种会返回-1的特殊情况  
>> 1、若取十位数时首位不为1，则返回-1  
>> 2、若s取完后a还有剩余，则返回-1    
***
#### 笔记总结
* 对于从末端取数的数字而言，直接%10和/10比化为字符串再运算更简便  
* （本题考虑漏洞）取第二位后组成的二位数不在[10，19]之间，例如取的数字为21，两个个位数相加不可能是21，因此造成错误。
* 对于向量和字符串而言，a.back()返回的是最后一个元素，a.end()返回的是结束元素，例如：对于一个字符串而言s.back()返回的是最后一个字符而s.end()返回的是‘\n’，**因此在使用中尽量使用back（）。**
* 对于需要去掉末尾零的int向量可以采用以下简便算法:
~~~c++
while(v.back()) v.pop_back();
~~~