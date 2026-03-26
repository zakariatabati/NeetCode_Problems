class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        myhash = defaultdict(int)
        for i in nums:
            myhash[i] = myhash[i]+1
        sorted_dict = dict(sorted(myhash.items(), key=lambda item: item[1],reverse = True))
        L = list(sorted_dict.keys())
        ans = []
        for i in range(k):
            ans.append(L[i])
        return ans

