class Node :
    def __init__(self,data,next):
        self.data = data
        self.next = next

class Solution : 

    def reverse(self,head) :
        if head == None or head.next == None :
            return head

        newhead = self.reverse(head.next)
        front = head.next
        front.next = head
        head.next = None
        return newhead

    def detect_plaindrome (self,head) :
        if head == None or head.next == None : 
            return True


        slow_pnt = head
        fast_pnt = head

        while fast_pnt.next != None and fast_pnt.next.next != None : 
            slow_pnt = slow_pnt.next
            fast_pnt = fast_pnt.next.next

        m1 = slow_pnt

        newhead = self.reverse(m1.next)
        temp1 = newhead
        temp2 = head
        isPalindrome = True

        while temp1 != None : 
            if(temp1.data != temp2.data) :
                isPalindrome = False
                break;
            temp2 = temp2.next
            temp1 = temp1.next
        self.reverse(newhead)
        return isPalindrome
        
        
        