class Solution(object):
    def isValid(self, word):
        n=False
        v=False
        c=False

        if len(word)<3:
            return False
        w= word.lower()
        for i in w:
            if i.isalnum():
                if i.isalpha():
                    if i in 'aeiou':
                        v=True
                    else:
                        c=True
                if i.isnumeric():
                    n=True
            else:
                return False

        return ((c & v))
        """
        :type word: str
        :rtype: bool
        """
        