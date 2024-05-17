# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left #左邊的小孩
#         self.right = right #右邊的小孩
class Solution:
    def removeLeafNodes(self, root: Optional[TreeNode], target: int) -> Optional[TreeNode]:
        if root == None:return root #沒有東西 就提早結束
        left = self.removeLeafNodes(root.left, target) #先用同一個函式 處理左半邊
        right = self.removeLeafNodes(root.right,target) #用同一個函式 處利右半邊
        if left==None and right ==None and root.val==target: #最後便葉子 且值相同
            return None #甚麼都沒有 交給當初呼叫我的人

        root.left = left #把新的左邊刪掉的結果 接到左邊
        root.right= right 
        return root