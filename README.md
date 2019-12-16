# My_LeetCode
train for alogrithm and interview
# Some alogrithm:
---------------
递归算法

分治算法
二分查找

## 贪心算法：
- 双端搜索：int left,right; while(left < right)

DFS: 算法走到底部才能判断解是否合法
BFS:

增量构造
位向量法

## 递归
#### 递归定义
- 直接或间接调用自身 
- 算法思想： 
  + 原问题可分解子问题（必要条件） 
  + 原与分解后的子问题相似（递归方程） 
  + 分解次数有限（子问题有穷） 
  + 最终问题可直接解决（递归边界）
#### 递归奥义
- 递归 = 递 + 归 
- 会想还要会写 => 实践出真知 
- 递归奥义——复制自己 
- 如何造纳米机器人
- 递归框架 
```C++
  int robot(int x, int y)     // 机器人的输入 
  if （边界条件）              // 什么时候不用造了（自己就能干完） 
    return 0; 
  int a = robot(x1, y1);       // 造一个小的自己帮忙干活 
  int b =  robot(x2, y2);     // 再造一个小的自己帮忙干活 
  return a + b;               // 自己要做的就是把别人的成果组装起来
```

## 图
- 图是描述万物关系的一种方式
- 图 = 节点 + 边
- 隐式图
  + 状态（节点） 不确定 
  + 关系（边） 不确定
  + 如何确定状态和关系（重点）
- 图搜索
  + 深度优先遍历(BFS)
  + 广度优先遍历(DFS)
- 隐式图搜索
  + N皇后、骑士游历、八数码
### 遍历：定义
- 按某种顺序访问图中所有节点

### 动态规划
- 实现动态规划有两种方法，一种是带备忘的自顶向下，一种是自底向上。
- 递归计算/递推计算/记忆化搜索
#### 定义
- 本质：递归 
- 原问题（N）->子问题（N-1）->原问题（N）
- 最优子结构 
  + 子问题最优决策可导出原问题最优决策  
  + 无后效性 
- 重叠子问题 
  + 去冗余 
  + 空间换时间（注意分析时空复杂度）
- 基本步骤,四个步骤 
  + 设计暴力算法，找到冗余 
  + 设计并存储状态（一维，二维，三维数组，甚至用Map） 
  + 递归式（状态转移方程） 
  + 自底向上计算最优解（编程方式）
#### 问题共性
- 套路 
  + 最优，最大，最小，最长，计数 
- 离散问题 
  + 容易设计状态（整数01背包问题） 
- 最优子结构 
  + N-1可以推导出N
#### 通过穷举框架解DP问题
我们不用递归思想进行穷举，而是利用「状态」进行穷举。我们具体到每一天，看看总共有几种可能的「状态」，再找出每个「状态」对应的「选择」。我们要穷举所有「状态」，穷举的目的是根据对应的「选择」更新状态。听起来抽象，你只要记住「状态」和「选择」两个词就行，下面实操一下就很容易明白了。
```C++
for 状态1 in 状态1的所有取值：
    for 状态2 in 状态2的所有取值：
        for ...
            dp[状态1][状态2][...] = 择优(选择1，选择2...)
```
### 并查集
#### 定义
1. 初始化
  + 把每个点所在集合初始化为其自身。
  + 通常来说，这个步骤在每次使用该数据结构时只需要执行一次，无论何种实现方式，时间复杂度均为O(N)。
2. 查找
  + 查找元素所在的集合，即根节点。
3. 合并
  + 将两个元素所在的集合合并为一个集合。
  + 通常来说，合并之前，应先判断两个元素是否属于同一集合，这可用上面的“查找”操作实现。
