# Nodes Without Sibling

## Difficulty: Easy

## Platform: GeeksForGeeks

## Problem Link
[View Problem](https://www.geeksforgeeks.org/problems/print-all-nodes-that-dont-have-sibling/1)

## Solved On
17 Oct 2026 at 05:25 pm

<h2><a href="https://www.geeksforgeeks.org/problems/print-all-nodes-that-dont-have-sibling/1">Nodes Without Sibling</a></h2><h3>Difficulty Level: Easy</h3><hr><p><span style="font-size: 18px;">Given a Binary Tree, find all nodes that do not have a sibling. Return the nodes in increasing order.</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong></span></p>
<ul>
<li><span style="font-size: 18px;">The root node cannot have a parent, so it should not be included in the answer&nbsp;</span></li>
<li><span style="font-size: 18px;">If every node has a sibling, return a list containing only <strong>-1</strong>.</span></li>
</ul>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>root = [37, 20, N, N, 113]
</span><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/927866/Web/Other/blobid0_1778130197.png" width="219" height="165"><br><span style="font-size: 18px;"><strong>Output: </strong>[</span><span style="font-size: 18px;">20, 113]
<strong>Explanation: </strong>Nodes 20 and 113 do not have any siblings.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>root[] = [1, 2, 3, 4]<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/927866/Web/Other/blobid1_1778130199.png" width="205" height="147"></span>
<span style="font-size: 18px;"><strong>Output:</strong> [4]
<strong>Explanation: </strong>Node 4 does not have a sibling.<br></span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>root[] = [37, 40, 13]<br></span><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/927866/Web/Other/blobid2_1778131092.png" width="212" height="134"><br> <span style="font-size: 18px;"><strong>Output: </strong>[</span><span style="font-size: 18px;">-1]
<strong>Explanation:<span style="font-size: 14pt;"> </span></strong><span style="font-size: 14pt;">E</span></span><span style="font-size: 14pt;">very node of the tree has a sibling.</span></pre>
