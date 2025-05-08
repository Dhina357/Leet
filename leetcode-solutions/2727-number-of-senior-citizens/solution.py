class Solution(object):
    def countSeniors(self, details):
        count = 0
        for i in details:
           
            c = i[11:-2]
           
            cc = int(c)
           
            if cc > 60:
                count += 1
        return count
