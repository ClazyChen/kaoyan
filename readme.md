# Readme

## 综述

本项目包括**计算机考研辅导笔记**及其**配套代码**和**自测程序**。包括5部分：

* 《数据结构》
* 《计算机网络原理》
* 《计算机组成原理》
* 《操作系统》
* 《算法设计》

其中，前4部分对应考研计算机初试中通常会出现的4门学科。《算法设计》对应考研计算机复试中的机试部分。

## 准备阶段

在阅读本笔记之前需要进行的准备工作：

* 保持对计算机学科的热爱。

* 掌握**高中理科数学知识**。主要包括数学归纳法。

  * 最好有一定的**初等数论**基础。《数据结构》中有一定数量的内容是需要初等数论知识证明的；但这部分内容通常不会进入考试，毕竟是计算机学科的考试而非数学竞赛。
  * 建议有**高等数学**和**概率统计**的基础。如果没有这两门学科的基础，可以跳过相关内容，不影响阅读。
  * 不强求有**离散数学**和**抽象代数**的基础，尽管如果有两门学科的基础的话，有些内容会更好理解。
  
* 会**使用C++进行编程**。

  > 笔者本人并不擅长C++，平时常用的软件语言是C#。但由于复试机试通常使用C++作答，以及初试试卷上可能出现C/C++代码或C风格伪代码，因此选用C++作为笔记中示例代码的编程语言。
  
  * 笔者的示例代码使用C++11标准，会使用简单的OOP。
  
    > 采用C++11的原因是，您参加复试机试时学校提供的编译器不一定支持更新版本的C++。
  * 如果不会OOP，也基本不影响阅读。
  * 如果不会STL，不影响阅读。《数据结构》里基本用不到，《算法设计》里会有对STL的简单介绍。
  
* 您的电脑有打开Markdown文档的软件。

  > 笔者写作时使用的环境是Typora。其他Markdown引擎不保证渲染效果和笔者写作时所见效果完全一致，可能会出现排版丑陋或一些Markdown扩展语法无法识别的情况，但不影响笔记内容的阅读。
  
* 如果需要使用**自测程序**，则需要下载Python3。

## 服务对象

笔者写作时，假定读者是**预备参加清华大学计算机系考研（912）的学生**。

* 参加**计算机统考（408）**或**其他学校自命题计算机考试**的学生也可阅读本笔记。

  > 笔记内容**全包围**408的考试范围；但很多内容超出了408的范围，阅读时请对照408的考纲。
  >
  > 其他学校自命题考试的学生请参照目标院校的考纲。
* 也欢迎其他同学和大佬们为笔者提出意见。

## 写作目标

笔者写作时，期望读者能够**仅通过本笔记（包括配套代码和自测程序）的阅读**在这门考试（912）中的目标得分为**120分**。根据往年清华录取情况，此分数已经足够通过初试。

> 如果希望取得更高的分数，请务必在保证其他三门科目成绩能拿到较好分数（280+）的基础上，对本学科的题目进行针对性训练。
>
> 但是初试分数特别高没有什么用（目前清华计算机考研完全不卷，分数线始终在400以下）；所以笔者认为有多余的时间还不如参加一些科研工作或者参加点竞赛，清华复试会拉开很大的分差。

笔者写作时，期望读者能够**仅通过掌握本笔记中的数据结构和算法，配合一定的训练量**，在清华复试机试中得到**60分**。关于机试的详细讨论，见《算法设计》部分的文档。

## doc文件目录结构

* pic文件夹：用来插入笔记的图片（png格式）。
* text文件夹：**笔记正文**的文档（md格式）。

  > 选择Markdown的原因：肯定有读者没有装latex；而Microsoft Word的docx格式不利于增量开发。如果有时间和必要，或许会在完成本项目之后搞一个word或者pdf版本的合集。

## src文件目录结构

* headers文件夹：用于存放《数据结构》部分的数据结构及其基础操作的**示例代码**；以及《算法设计》部分中经典算法的示例代码。对于《数据结构》部分中介绍的算法，归入到《数据结构》的对应章节。

  * ds
    * vector.h
  * algorithm

  > 此代码为考研复习的核心内容，建议和笔记正文对照进行复习。
  >
  > 笔记正文中只引用了一部分较为重要的headers代码。对于笔记中没有引用的代码，它们通常是已有代码的简单封装或重载，不属于需要刻意理解和记忆的知识点，在复习时可以略过。
* examples文件夹：用于存放《数据结构》和《算法设计》部分示例代码的**效果演示**。此代码仅用于展示headers文件夹中的文件中的功能如何使用。对于《数据结构》中介绍的算法，如果在《算法设计》中再次提到，则在《算法设计》的文件夹中提供一个副本。

  另外三门学科也提供一定的示例演示。

  * ds
    * chap02
      * vector.cpp
  * network
  * organization
  * os
  * algorithm

  > 如果对笔记正文中介绍的代码部分有疑问，可以通过运行example文件（或按照您的想法，自己调用headers代码中的接口）来观察效果，从而加深对知识点的理解和记忆。
* tests文件夹：用于存放自测代码。由于这部分对效率的要求不高且读者不需要阅读，代码**使用Python编写**。**自测程序是用来复习回顾知识点的工具**，想要进行解题训练的同学建议购买习题书。

  * test-generate文件夹：利用headers中的《数据结构》代码，自动生成题目的代码。一些典型题目（比如逆波兰式转换、KMP算next数组等）使用这种方法生成，以保证每次自测的题目不同。
    * ds
      * suffix.py
      * kmp.py
  * test-run文件夹：生成自测题的代码。每门学科一个子文件夹。
    * ds
      * chap0x.py：（x=1,2,...）这些文件用来存放每一章中不使用test-generate手段生成的题目。
      * run.py：此文件用于汇总单学科的自测程序。
    * network
    * organization
    * os
  * test.py：四个学科自测程序的汇总。**实际自测时只需要运行这个文件**。

  > 此代码用于帮助您在复习的时候及时对自己的学习效果进行自测，这里提供了一个自测框架，以及和本笔记配套的四门初试学科的自测题目。通过修改这个自测框架中的内容，您可以制作用于复习其他科目（如政治）的命令行。

> 欢迎您对这个框架提出改进意见。
>
> 《算法设计》部分建议在题库网站（如LeetCode）上直接做解题训练。

## 参考文献

以下书目是笔者在**清华大学计算机系本科期间使用的教材**：

* 《数据结构（C++版）》（邓俊辉编著）
* 《计算机网络》（特南鲍姆、维瑟拉尔著；严伟、潘爱民译）
* 《计算机组成与设计：硬件/软件接口（RISC-V版）》（帕特森、亨尼斯著；易江芳、刘先华等译）
* 《操作系统：精髓与设计原理》（斯塔尔斯著；陈向群、陈渝等译）

其他参考文献以后再补。

## 致谢

* 邓俊辉、徐明伟、陈康、陈渝（排名不分先后）
* 特别致谢：@雁南飞，@Hushhhhovo，@Lastweek

## 关于作者

联系方式：

* e-mail：clazychen@gmail.com
* QQ：2576432843

和本项目有关的建议，可以直接在GitHub上提issue。

## 声明

本项目不涉及任何政治立场。

> 若有在政治上可能令人疑惑的内容，烦请联系笔者指出。
