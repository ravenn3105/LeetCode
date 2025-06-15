class Solution:
    def generateTag(self, caption: str) -> str:
        if not caption:
            return "#"
        
        words = caption.split()
        if not words:
            return "#"
        
        camel_case = words[0].lower()
        for i in words[1:]:
            if i:
                camel_case += i[0].upper() + i[1:].lower()
        
        tag = '#' + camel_case
        return tag[0:100]
        
        