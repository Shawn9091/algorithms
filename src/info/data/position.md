### 网易 3D视觉算法工程师
业方面偏向于VIO这块，SVO、因子图优化、预积分、MSCKF考察的比较多
### 大疆 感知算法工程师
侧重VIO，笔试考的很全，考察基础的图像处理算法以及SLAM14讲里面的经典算法，二面问项目难点以及解决手段。
大疆的流程超长，6月份开始投，7月初笔试，7月中下旬一面，8月初二面，8月中三面，9月初才有最终结果。

昨天晚上六点四十五面完的，结果未知！我来聊聊面大疆的感受吧，我投的是感知算法工程师，大疆两轮测评，三轮面试。
第一轮基本也就是性格测试，第二轮是笔试，说实话大疆的笔试基本中规中矩，考察SLAM基础，没有什么难度，
把高博的书搞完基本应该能过！第一轮电话面试，面的也很基础，首先面试官先问我SLAM算法基础，系统初始化，
如何求本质矩阵基础矩阵这些基础的，随后问了一些C++的相关问题，接着第二个面试官面我深度学习相关问题，
尤其是语义分割的相关问题，问得很细，包括整个项目具体细节。基本只要是你自己做的，那应该没问题！
第一轮面试大概面了半小时，第二轮面试，我被跳过去了，直接进入了终面。终面体验非常好，虽然我自己可能答的不好，
终面遇到了沈老师，沈老师是唯一的面试官，感觉很棒！沈老师全程在听我说，虽然我知道自己说了很多关于语义分割的，
但是沈老师并没有打断我，然后最后沈老师还告诉我，做产品不是从研究出发，而应该是问题导向，要去找到用户的痛点。
由于自己这段时间主要在做语义分割，所以在SLAM上有所欠缺，这也是自己当时的不足吧！大疆面试已经结束了，结果未知，
但是终面能够遇到沈老师也是一件非常nice的事！祝自己好运，也祝各位好运！

笔试题型：
选择：5个
填空：9个
简答：3个
知识点：
聚类，CNN算尺寸的，几何 stereo 去噪，相机模型，旋转矩阵，单应性矩阵
[编程题1：LeetCode 45: Jump Game II](https://leetcode.com/problems/jump-game-ii)
[答案](https://www.cnblogs.com/grandyang/p/4373533.html)
[编程题2：LeetCode 123: Best Time to Buy and Sell Stock I II III](https://leetcode.com/problems/best-time-to-buy-and-sell-stock)
[编程题3：LeetCode 181: Employees Earning More Than Their Managers](https://leetcode.com/problems/employees-earning-more-than-their-managers)

#### [2019校招笔试](https://blog.csdn.net/WillWinston/article/details/80950390)
一、选择题
1. 图像边缘检测的卷积核是什么样的形式？
```
负的为坐标小的部分，正的为坐标大的
Roberts：2*2 对角正负 1，[-1, 0; 0, 1] [0, -1; 1, 0]
Prewitt：3*3 的行列正负 1 [-1, -1, -1; 0, 0, 0; 1, 1, 1] [-1, 0, 1; -1, 0, 1; -1, 0, 1]
Sobel：在Prewitt的基础上将与目标点相邻的上下左右元素权重 *2
       [-1, -2, -1; 0, 0, 0; 1, 2, 1] [-1, 0, 1; -2, 0, 2; -1, 0, 1]
LOG：差分高斯 DOG 来近似 拉普拉斯 LOG
Canny：
```
2. [图像去噪滤波的方式有哪些？](https://blog.csdn.net/Julialove102123/article/details/79700638)
```
均值滤波: 
    均值滤波，是图像处理中最常用的手段，从频率域观点来看均值滤波是一种低通滤波器，
    高频信号将会去掉，因此可以帮助消除图像尖锐噪声，实现图像平滑，模糊等功能。
    理想的均值滤波是用每个像素和它周围像素计算出来的平均值替换图像中每个像素
中值滤波:
    中值滤波也是消除图像噪声最常见的手段之一，特别是消除椒盐噪声，
    中值滤波的效果要比均值滤波更好。中值滤波是跟均值滤波唯一不同是，
    不是用均值来替换中心每个像素，而是将周围像素和中心像素排序以后，取中值
最大最小值滤波:
    最大最小值滤波是一种比较保守的图像处理手段，与中值滤波类似，
    首先要排序周围像素和中心像素值，然后将中心像素值与最小和最大像素值比较，
    如果比最小值小，则替换中心像素为最小值，如果中心像素比最大值大，则替换中心像素为最大值
双边滤波:
    在原有高斯函数的基础上加了一项, 在强度差距大的地方（边缘），权重会减小，滤波效应也就变小。
    总体而言，在像素强度变换不大的区域，双边滤波有类似于高斯滤波的效果，
    而在图像边缘等强度梯度较大的地方，可以保持梯度
引导滤波:
    与双边滤波最大的相似之处，就是同样具有保持边缘特性。在引导滤波的定义中，用到了局部线性模型
    该模型认为，某函数上一点与其邻近部分的点成线性关系，一个复杂的函数就可以用很多局部的线性函数来表示，
    当需要求该函数上某一点的值时，只需计算所有包含该点的线性函数的值并做平均即可。
    这种模型，在表示非解析函数上，非常有用。我们可以认为图像是一个二维函数，而且没法写出解析表达式....
```
3. [哪些排序算法的时间复杂度为O(nlogn)](https://img-blog.csdn.net/20180918171358298?watermark/2/text/aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L1dpbGxXaW5zdG9u/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70)
4. 影响相机内参的因素有哪些？
```
焦距（fx 和 fy）,中心像素坐标（u0和v0）,坐标轴倾斜系数s，
以及径向畸变系数（k1,k2,k3）和切向畸变系数（p1,p2）
```
二、填空题
1. 计算空间中点到直线的距离
```
用叉乘计算点到空间直线的距离，或者是用公式
```
2. 设 X1,...,Xm ​来自于总体 X~N(μ,σ2) 的样本，则E(σ2m)=?
```

```
3. 图像识别中的几种特征描述子
```
SIFT、SURF、BRIEF , BRISK , ORB
三维空间特征描述子：
    三位识别方面的描述子主要分为局部特征描述子和全局特征描述子
    
局部特征描述子：
    PFH (Point Feature Histogram) (点特征直方图)
    FPFH (Fast Point Feature Histogram) (快速点特征直方图) ,
    RSD (Radius-Based Surface Descriptor) (半径表面描述子) ,
    3DSC (3D Shape Context) (3D形状上下文) ,
    USC (Unique Shape Context) (唯一形状上下文) ,
    SHOT (Signatures of Histogram Orientations) (方向签名直方图) ,
    Spin Image (旋转图) ,
    RIFT (Rotation-Invariant Feature Transform) (旋转不变特征变化) ,
    NARF (Normal Aligned Radial Feature) (法线对齐半径特征);
    RoPS (Rotation Projection Statistics) (旋转投影统计)
    
全局特征描述子：
    VFH (Viewpoint Feature Histogram) (点特征直方图)
    CVFH (Fast Viewpoint Feature Histogram) (快速点特征直方图) ,
    OUR-CVFH (Radius-Based Surface Descriptor) (基于半径的表面描述子) ,
    ESH (3D Shape Context) (3D形状上下文) ,
    GFPFH (Global Fast Point Feature Histogram) (全局快速点特征直方图)
    GRSD (Global Radius-Surface Descriptor) (全局半径表面描述子)
```
4. 相机M1坐标系到相机M2坐标系的变换
5. 旋转矩阵的几种表示方式
```
题目给出了3X3的旋转矩阵（Rotation Matrix）形式，其他的还有：
    EA : 欧拉角（Euler Angle），
    RV : 旋转向量（Rotation Vector），
    AA : 轴角（Axis-Angle），
    Q : 四元数（Quaternion）
    DCM : 方向余弦矩阵（Direction Cosine Matrix）–类似于旋转矩阵
```
三、解答题
1. 给定一个800x800大小的网络，3通道，卷积核size为3x3，stride为1，padding为1，
   pooling为max pooling，经过几次操作，得到的特征层维度？每个区域感受野？
2. k-means算法相关问题
```
优点：易于实现
缺点：可能收敛于局部最小值，在大规模数据收敛慢
```
3. 双目视觉相机baseline与测距极限的关系
```
深度 与 焦距、baseline、视差之间的关系如下
    z = \frac{baseline * focal}{d}
根据以上推理结果可以得出：
    ——视差越大，观测距离越近；
    ——基线越宽，观测距离越远；
    ——视差计算困难，计算量和精度是关键难点。
```
### 360 SLAM算法工程师
比较多C++的知识，还有就是光流，SVO，滤波。据了解主要是做扫地机器人所以侧重多传感器融合。面试官喜欢出剑指offer上的题目
### 旷世
侧重基础理论推导，SVO、LSD等，真的就是边看论文边问问题。二面问项目，侧重深度学习，狂问yolo。面试官直接在电话上问算法题。
### Aibee 计算机视觉算法工程师
面试考察图像处理、3D视觉的基础也问了深度学习的基础。
