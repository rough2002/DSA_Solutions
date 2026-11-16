class Node  : 
    def __init__(self,data,next):
        self.data = data
        self.next = next


# finding middle of linked list

class Solution : 
    def brute(self,head) : 
        if head == None or head.next == None :
            return head

        temp  = head
        cnt = 0

        while temp != None :
            cnt += 1
            temp = temp.next

        temp = head

        for i in range(cnt//2):
            temp = temp.next

        return temp

    def optimized (self,head) : 
        if head == None or head.next == None :
                    return head

        slow_pnt = head
        fast_pnt = head

        while fast_pnt != None and fast_pnt.next != None :
            slow_pnt = slow_pnt.next
            fast_pnt = fast_pnt.next.next    

        return slow_pnt    
            