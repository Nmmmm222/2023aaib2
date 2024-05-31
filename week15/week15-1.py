class Solution:
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        table={} #大括號代表字典 table[num]對應的次數
        for num in nums: #每個數字輪一次
            if num in table:#出現過的話
                table[num] += 1 #次數+1
            else:
                table[num] =1 #第1次出現
        #print(table)
        ans=0
        for num in table: #把table里全部的數字倫一次
            if table[num]==2:
                ans=ans^num
        return ans