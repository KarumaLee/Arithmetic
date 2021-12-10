## 深度优先搜索 | Depth-First-Search，DFS  
> version: 1.0  
author: Karuma  
update: 2021/12/10

### 分类（自定义）
DFS（排列） | DFS（组合）  

### 代码模板：  
~~~c++
void dfs()
{
  //step1 边界判断（部分）
  if()
  {
    //二维数组进位等等
  }
  //step2 结束判断
  if()
  {
    //递归结束判断
    return;
  }
  //step3 搜索操作
  for()
  if()//标记为判断，判断该位置是否被访问过
  {
    //搜索进行
    //状态数组更新
    dfs();
    //搜索失败，状态数组回退
    //回溯搜索
  }
}
~~~

