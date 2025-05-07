class Solution(object):
    def shortestToChar(self, s, c):
         # Find the length of the input string
        string_length = len(s)
      
        # Initialize the answer list with a default high value
        answer = [string_length] * string_length
      
        # Initialize the previous occurrence index of character 'c' to minus infinity
        previous_occurrence = float('-inf')
      
        # Forward pass: Find the distance to the closest occurrence of 'c' to the left
        for index, character in enumerate(s):
            if character == c:
                # Update the previous occurrence index when we find 'c'
                previous_occurrence = index
            # Update the answer list with the minimum distance so far
            answer[index] = min(answer[index], index - previous_occurrence)
      
        # Initialize the next occurrence index of character 'c' to infinity
        next_occurrence = float('inf')
      
        # Backward pass: Find the distance to the closest occurrence of 'c' to the right
        for index in range(string_length - 1, -1, -1):
            if s[index] == c:
                # Update the next occurrence index when we find 'c'
                next_occurrence = index
            # Update the answer list with the minimum distance from either direction
            answer[index] = min(answer[index], next_occurrence - index)
      
        # Return the populated list of minimum distances to 'c'
        return answer

        
