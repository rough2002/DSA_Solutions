class Solution :
    def delete (self,head,key) :
        if head == None :
            return head

        temp = head

        while temp != None :
            if temp.data == key : 
                if temp == head :
                    head = temp.next
                    head.prev = None
                    temp = head
                else :
                    prev_node= temp.prev
                    next_node = temp.next
                    if next_node != None : next_node.prev = prev_node
                    prev_node.next = next_node
                    temp = next_node
            else :
                temp = temp.next
                
                
            
            