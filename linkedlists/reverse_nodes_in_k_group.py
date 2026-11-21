class Node : 
    def __init__(self,data,next):
        self.data = data
        self.next = next


class Solution : 
    def reverse (self,head) : 
        if head == None or head.next == None :
            return head

        prev = None
        temp = head 
        while temp != None : 
            next_node  = temp.next
            temp.next = prev
            prev = temp
            temp = next_node

        return prev

    def find_kth_node(self,head ,k) : 
        temp = head
        k-=1
        while( k > 0 and temp != None) :
            k -= 1
            temp = temp.next

        return temp
    




    def main (self, head ,k ) : 

        temp = head
        prev_node = None

        while temp != None: 
            kth_node = self.find_kth_node(temp ,k)
            if(kth_node == None) :
                if prev_node != None : 
                    prev_node.next = temp
                break;
            next_node = kth_node.next
            kth_node.next =  None
            self.reverse(temp)
            if temp == head :
                head = kth_node
            else : 
                prev_node.next = kth_node

            prev_node = temp
            temp = next_node

        return head


            
            
            



