# Masking

> Masking is an operation in which we can selectively mask or filter the bits of a variable, such that some bits are changed according to our needs while the others remain unchanged.

_Masking is performed with the help of bitwise operators._

## 1. Masking using bitwise AND

Consider the following arbitrary bit pattern:

$b_{31}b_{30}b_{29}b_{28}b_{27}b_{26}b_{25}b_{24}b_{23}b_{22}b_{21}b_{20}b_{19}b_{18}b_{17}b_{16}b_{15}b_{14}b_{13}b_{12}b_{11}b_{10}b_9b_8b_7b_6b_5b_4b_3b_2b_1b_0$

$b_{31}b_{30}.....b_{0}$ are bits and they can be either 0 or 1.


$b_{31}\ b_{30}\ b_{29}\ b_{28}\ b_{27}\ b_{26}\ b_{25}\ b_{24}\ \ b_{23}\ b_{22}\ b_{21}\ b_{20}\ b_{19}\ b_{18}\ b_{17}\ b_{16}\ \ b_{15}\ b_{14}\ b_{13}\ b_{12}\ b_{11}\ b_{10}\ b_9\ b_8\ b_7\ \ b_6\ b_5\ b_4\ b_3\ b_2\ b_1\ b_0$

$\ 0\ \ \ 0\ \ \ 0\ \ \ 0\ \ \ 0\ \ \ 0\ \ \ 0\ \ \ 0\ \ \ \ 0\ \ \ 0\ \ \ 0\ \ \ 1\ \ \ 1\ \ \ 1\ \ \ 1\ \ \ 1\ \ \ 0\ \ \ \ 0\ \ \ 0\ \ \ 0\ \ \ 0\ \ \ 0\ \ \ 0\ \ \ 0\ \ \ 1\ \ \ \ 1\ \ \ 1\ \ \ 1\ \ \ 1\ \ \ 1\ \ \ 1\ \ \ 1$





---
