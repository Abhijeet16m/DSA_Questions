# Closest in BST

## Difficulty: Medium

## Platform: GeeksForGeeks

## Problem Link
[View Problem](https://www.geeksforgeeks.org/problems/find-the-closest-element-in-bst/1?_gl=1*g6730j*_up*MQ..*_gs*MQ..&gclid=Cj0KCQiA5NXXBhDEARIsABAJhdKd1dNTqPTAxOAgSxWYCE--mwrTsrSuo2MtmWr0E8vhwvcTiK-Pua0aAh9SEALw_wcB&gbraid=0AAAAAC9yBkCJa00KMJvXGJwpIDMT_sgx0)

## Solved On
12 Nov 2026 at 04:37 pm

<h2><a href="https://www.geeksforgeeks.org/problems/find-the-closest-element-in-bst/1?_gl=1*g6730j*_up*MQ..*_gs*MQ..&gclid=Cj0KCQiA5NXXBhDEARIsABAJhdKd1dNTqPTAxOAgSxWYCE--mwrTsrSuo2MtmWr0E8vhwvcTiK-Pua0aAh9SEALw_wcB&gbraid=0AAAAAC9yBkCJa00KMJvXGJwpIDMT_sgx0">Closest in BST</a></h2><h3>Difficulty Level: Medium</h3><hr><p><span style="font-size: 14pt;">Given <strong>root</strong> of a Binary Search Tree (BST) and an integer <strong>k</strong>, find the minimum absolute difference between k and the value of any node in the BST.</span></p><p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p><pre><span style="font-size: 14pt;"><strong>Input:</strong> root = [10, 2, 11, 1, 5, N, N, N, N, 3, 6, N, 4], k = 13
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700423/Web/Other/blobid0_1783688040.png" alt="" width="191" height="233">
<strong>Output: </strong>2<strong>
Explanation: </strong>The node with value 11 is closest to k = 13. So, the <span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; white-space: normal;">minimum</span><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; white-space: normal;"> absolute difference</span> is |11 - 13| = 2.
</span></pre><pre><span style="font-size: 14pt;"><strong>Input:</strong> root = [8, 1, 9, N, 4, N, 10, 3], k = 9<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700423/Web/Other/blobid1_1783744852.png" alt="" width="209" height="215">
<strong>Output: </strong>0<strong>
Explanation: </strong>The node with value 9 is closest to k = 9. So, the<strong> </strong><span style="white-space: normal; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">minimum</span><span style="white-space: normal; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;"> absolute difference</span> is |9 - 9| = 0.</span></pre>