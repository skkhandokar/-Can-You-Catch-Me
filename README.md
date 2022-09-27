# -Can-You-Catch-Me
Problem Statement

You will be given a string S consisting of English captial letters. The characters of that string are connected like a binary tree. You can assume that ith (0 <= i <|S|) character is a node and there are some edges between those nodes. We call a text as the characters from root to a leaf node. There may be multiple texts in that binary tree. You need to tell how many texts are forming a palindrome? 

Input Format

    First line will contain string S.
    Then the binary tree will be given in level order. If a node value is -1, that means there is no node.

Constraints

    0 < |S| <= 20

Output Format

    Output the number of texts that forms palindrome.

Sample Input 

ABCAA
0
1 2
3 -1 -1 4
-1 -1 -1 -1

Sample Output 0

2


