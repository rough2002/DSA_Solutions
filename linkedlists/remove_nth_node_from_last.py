class Node : 
    def __init__(self,data,next):
        self.data = data
        self.next = next

#deleting k th element from the last
class Solution : 
    def delete_brute(self , head, k ) : 
        if head== None or k == 0 : 
            return head

        total_nodes = 0 
        temp = head

        while(temp != None) : 
            total_nodes += 1
            temp = temp.next

        if total_nodes == k : 
            return head.next

        if k > total_nodes : 
            return head

        
        #getting the k-1 node
        prev = total_nodes-k
        temp = head
        for i in range(prev) : 
            temp = temp.next

        temp.next = temp.next.next

    def delete_optimized (self, head , k) : 
        if head== None or k == 0 : 
                    return head

        fast_temp = head
        slow_temp = head

        i=1
        while i != k and fast_temp != None :
             fast_temp = fast_temp.next
             i += 1

        if fast_temp == None :
             return head

        if fast_temp.next == None : 
             return head.next

        while fast_temp.next != None : 
             slow_temp = slow_temp.next
             fast_temp = fast_temp.next

        slow_temp.next = slow_temp.next.next

        return head

             



        