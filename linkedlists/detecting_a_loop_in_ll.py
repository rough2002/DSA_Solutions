class Node :
    def __init__(self,data,next):
        self.data = data
        self.next = next

class Solution :
    def detect_loop_brute(self,head) :
        visited = {}
        temp = head
        while temp != None :
            if temp in visited :
                return True
            else :
              visited[temp] = 1
              temp = temp.next

        return False

    def detect_loop_optimized (self,head) :
        if head == None or head.next == None :
            return False

        slow = head
        fast = head


        while(fast != None and fast.next != None) : 
            slow = slow.next
            fast = fast.next.next

            if slow == fast :
                return True

        return False
        