class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        myhash = dict()
        for i in strs:
            k = "".join(sorted(i))
            if k in myhash.keys():
                myhash[k].append(i)
            else:
                myhash[k] = [i]
        return list(myhash.values())
        
