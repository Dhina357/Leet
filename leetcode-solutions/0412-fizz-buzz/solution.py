class Solution(object):
    def fizzBuzz(self, n):
        a=[]
        for x in range(1,n+1):
            if x%3==0 and x%5==0 :
                a.append("FizzBuzz")
               
            elif x%3==0:
                a.append("Fizz")
                
            elif x%5==0:
                a.append("Buzz")
                
            else:
                 a.append(str(x))
        return a
        """
        :type n: int
        :rtype: List[str]
        """
        
