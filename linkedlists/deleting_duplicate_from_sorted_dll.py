class Solution : 
    def sol (self,head) :
        if head == None or head.next == None:
            return head

        prev_node = head
        temp = head.next

        while temp != None :
            if temp.data == prev_node.data :
                temp = temp.next
            else : 
                prev_node.next = temp
                temp.prev = prev_node
                prev_node = temp
                temp = temp.next

        prev_node.next = None

        return head
