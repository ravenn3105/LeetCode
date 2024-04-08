class Solution(object):
    def countStudents(self, students, sandwiches):
        counts = [0, 0]
        for i in students:
            counts[i] += 1

        remaining = len(sandwiches)
        for i in sandwiches:
            if counts[i] == 0:
                break
            if remaining == 0:
                break
            counts[i] -= 1
            remaining -= 1
        
        return remaining
        """
        :type students: List[int]
        :type sandwiches: List[int]
        :rtype: int
        """
        