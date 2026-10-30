# Max Distance Between Two in Array

## Difficulty: Basic

## Platform: GeeksForGeeks

## Problem Link
[View Problem](https://www.geeksforgeeks.org/problems/count-number-of-elements-between-two-given-elements-in-array4044/1?page=2&category=Arrays&difficulty=Basic&sortBy=submissions)

## Solved On
31 Oct 2026 at 01:52 am

<h2><a href="https://www.geeksforgeeks.org/problems/count-number-of-elements-between-two-given-elements-in-array4044/1?page=2&category=Arrays&difficulty=Basic&sortBy=submissions">Max Distance Between Two in Array</a></h2><h3>Difficulty Level: Basic</h3><hr><p><span style="font-size: large;">Given an unsorted array <strong>arr[]</strong> and two integer <strong>x</strong> and <strong>y</strong>, find how many elements lie between x and y in the array, excluding x and y&nbsp;themselves.</span></p><ul><li><span style="font-size: large;">If either x or y appears multiple times in the array, consider the pair of occurrences that are farthest apart (i.e., have the maximum distance between their indices).&nbsp; </span></li><li><span style="font-size: large;">If either&nbsp;</span><span style="font-size: large;">x or y</span><span style="font-size: large;">&nbsp;is not present in the array, or if x and y are the same, return -1.</span></li></ul><p><span style="font-size: 18px;"><strong>Examples:</strong></span></p><pre><span style="font-size: 18px;"><strong>Input:</strong> arr[] = [4, 2, 1, 10, 6], x = 4, y = 6
<strong>Output:</strong> 3
<strong>Explanation: </strong>We have an array [4, 2, 1, 10, 6] and x = 4 and y = 6. Elements between them are [2, 1, 10]<strong> </strong></span></pre><pre><span style="font-size: 18px;"><strong>Input:</strong> arr[] = [3, 2, 7, 2, 6, 1, 4], x = 2, y = 4
<strong>Output:</strong> 4<br><strong>Explanation</strong>: The farthest 2 and 4 have four elements between them.</span></pre><pre><span style="font-size: 18px;"><strong>Input:</strong> arr[] = [3, 2, 7], x = 2, y = 4
<strong>Output:</strong> -1<br><strong>Explanation</strong>: 4 is not present in the array.</span></pre>