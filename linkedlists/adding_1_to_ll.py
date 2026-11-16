class Node :  
    def __init__(self,data,next = None):
        self.data = data
        self.next = next


class Solution : 

    def reverse (self , head) :
        if head == None or head.next == None  :
            return head

        temp = head
        prev = None

        while temp != None :
            front = temp.next
            temp.next  = prev
            prev = temp
            temp = front

        return prev 

    def brute(self,head) : 
        newhead = self.reverse(head)
        temp = newhead
        carry = 1
        while temp != None :
            temp.data += carry
            if(temp.data < 10) :
                carry = 0
                break
            else :
                temp.data = 0
                carry = 1
            temp = temp.next
        if(carry == 1) :
            newnode = Node(1)
            newhead = self.reverse(newhead)
            newnode.next = newhead
            return newnode

        return self.reverse(newhead)

    def helper (self,head) :
        if (head == None) :
            return 1

        carry = self.helper(head.next)
        head.data = head.data + carry
        if(head.data == 10) :
            head.data = 0
            return 1
        else :
            return 0
        


    def optimized (self,head) :
        if head == None :
            return head


        carry = self.helper(head)
        if carry == 1 :
            new_node = Node(1)
            new_node.next = head
            return new_node

        return head
        
        





