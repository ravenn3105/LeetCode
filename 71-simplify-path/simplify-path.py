class Solution:
    def simplifyPath(self, path: str) -> str:
        components = path.split("/")
        st = []

        for i in components:
            if i == "" or i == ".":
                continue
            
            if i == "..":
                if st:
                    st.pop()
            else:
                st.append(i)
        
        return "/" + "/".join(st)