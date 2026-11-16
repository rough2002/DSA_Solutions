class Node : 
    def __init__(self,data,next = None):
        self.data = data
        self.next = next

class Solution :
    def sort(self , head) : 
        if head == None or head.next == None : 
            return head

        zero_head = Node(-1)
        one_head = Node(-1)
        two_head = Node(-1)

        temp = head
        zero_tail = zero_head
        one_tail = one_head
        two_tail = two_head

        while temp != None :
             if temp.data == 0 : 
                 zero_tail.next = temp
                 zero_tail = temp
             elif temp.data == 1 :
                 one_tail.next = temp
                 one_tail = temp
             else :
                 two_tail.next = temp
                 two_tail = temp

             temp = temp.next

        zero_tail.next = one_head.next
        if(two_head.next) : 
            one_tail.next = two_head.next
            two_tail.next = None
        else : 
            one_tail.next = None

        return zero_head.next

             
