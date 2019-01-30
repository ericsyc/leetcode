class Solution(object):
    def reorderLogFiles(self, logs):
        """
        :type logs: List[str]
        :rtype: List[str]
        """
        ans = []
        for log in logs:
            if log.split(' ')[1].isdigit():
                ans.append(log)
            else:
                tmp = ' '.join(log.split(' ')[1:])
                if not ans:
                    ans = [log]
                else:
                    for i in range(len(ans)):
                        flag = True
                        if ans[i].split(' ')[1].isdigit():
                            flag = False
                            break
                        else:
                            if ' '.join(ans[i].split(' ')[1:]) > tmp:
                                flag = False
                                break
                    if flag:
                        ans.append(log)
                    else:
                        ans.insert(i, log)
        return ans