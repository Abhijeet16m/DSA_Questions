# Next Right Node

## Difficulty: Easy

## Platform: GeeksForGeeks

## Problem Link
[View Problem](https://www.geeksforgeeks.org/problems/next-right-node/1?page=2&category=Tree&difficulty=Easy&sortBy=submissions)

## Solved On
04 Nov 2026 at 08:25 pm

<h2><a href="https://www.geeksforgeeks.org/problems/next-right-node/1?page=2&category=Tree&difficulty=Easy&sortBy=submissions">Next Right Node</a></h2><h3>Difficulty Level: Easy</h3><hr><p class="PDq2pG_selectionAnchorContainer" data-start="33" data-end="296"><span style="font-size: 14pt;">Given <strong>root </strong>of a binary tree and an integer <strong>key</strong>, return the node immediately to the right of the node containing key on the same level. If the given node is the rightmost node of its level or the key is not present in the tree, return a node with value -1.</span></p>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input: </span></strong><span style="font-size: 18px;">root</span><strong><span style="font-size: 18px;"> </span></strong><span style="font-size: 18px;">= [</span><span style="font-size: 18px;">10 2 6 8 4 N 5</span><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;"><span style="font-size: 18px;">],</span></span><span style="font-size: 18px;"> key = 2<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700606/Web/Other/blobid0_1746689804.webp" width="264" height="193"></span><br><strong><span style="font-size: 18px;">Output: </span></strong><span style="font-size: 18px;">6</span>
<strong><span style="font-size: 18px;">Explanation: </span></strong><span style="font-size: 18px;">We can see in the above tree</span> <span style="font-size: 18px;">that the next right node of 2 is 6.</span></pre>
<pre><strong><span style="font-size: 18px;">Input: </span></strong><span style="font-size: 18px;">root</span><strong style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;"><span style="font-size: 18px;"> </span></strong><span style="font-size: 18px;">=</span><strong style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;"><span style="font-size: 18px;"> </span></strong><span style="font-size: 18px;">[10 2 6 8 4 N 5</span><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;"><span style="font-size: 18px;">],</span></span><span style="font-size: 18px;"> key = 5<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700606/Web/Other/blobid1_1746690130.webp" width="268" height="196"></span><br><strong><span style="font-size: 18px;">Output: </span></strong><span style="font-size: 18px;">-1
</span><strong><span style="font-size: 18px;">Explanation: </span></strong><span style="font-size: 18px;">We can see in the above tree</span> <span style="font-size: 18px;">that there's no next right node of 5. So, the output is -1.</span>
</pre>