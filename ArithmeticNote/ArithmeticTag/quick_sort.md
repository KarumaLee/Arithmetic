## 快速排序

#### 算法思想：

> step1：确定分界点
>
> 取数组其中一个元素作为分界点
>
> **step2**：调整区间
>
> 大于关键点的元素统一放右侧，小于关键点的元素统一放左侧
>
> step3：递归处理
>
> 被分割的左右两侧分别递归处理

#### step2思想实现：

> 核心思想 -> 双指针
>
> step1 定义两支针i，j分别位于数组两侧
>
> step2 右移i（左移j）直到出现a[i]>x和a[j]<x的情况并交换
>
> step3 i，j相遇时结束循环

#### 代码实现

~~~c++
void quickSort(int q[],int l,int r)
{
  if(l>=r) return;
  int x=q[l+r>>1],i=l-1,j=r+1;
  while(i<j)
  {
    do{i++};while(q[i]<x);
    do{j--};while(q[j]>x);
    if(i<j) swap(q[i],q[j]);
  }
  quickSort(q,l,j);
  quickSort(q,j+1,r);
}
~~~

