class Node : 
    def __init__(self,data,next):
        self.data = data
        self.next = next

class Solution : 
    def reverse_iteration(self,head):

        if head == None or head.next == None :
            return head
        
        temp = head
        prev = None

        while temp != None : 
            front = temp.next
            temp.next = prev
            prev = temp
            temp = front

        return prev

    def reverse_recurrcion(self,head) :

        if head == None or head.next == None : 
            return head

        new_head = self.reverse_recurrcion(head.next)
        front = head.next
        front.next = head
        head.next = None

        return new_head



