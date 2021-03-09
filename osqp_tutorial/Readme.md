# osqp库的使用以及常用命令
Consider the following QP:
$$
minimize \frac{1}{2}x^T\left[
 \begin{matrix}
   4&1\\
   1&2
  \end{matrix}
  \right] \tag{1}
  x+\left[\begin{matrix}
      1\\
      1 
  \end{matrix}\right]^Tx
$$
$$
limit:\left[\begin{matrix}
      1\\
      0\\
      0
  \end{matrix}\right]\leq\left[\begin{matrix}
      1&1\\
      1&0\\
      0&1
  \end{matrix}\right]x\leq\left[\begin{matrix}
      1\\
      0.7\\
      0.7
  \end{matrix}\right]\tag{2}
$$
We show below how to solve the problem in C++.



