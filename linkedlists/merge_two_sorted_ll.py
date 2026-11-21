class Node  :
    def __init__(self,data,next):
        self.data = data
        self.next = next

class Solution :
    def optimized  (self , head1 ,head2) :
        if head1 == None : 
            return head2
        if head2 == None :
            return head1

        temp1 = head1
        temp2 = head2
        #taking a dummy node
        res = Node(-1,None)
        temp3 = res

        while ( temp1 != None and temp2 != None) :
            if (temp1.data <= temp2.data) :
                temp3.next = temp1
                temp1 = temp1.next
            else :
                temp3.next = temp2
                temp2 = temp2.next

            temp3 = temp3.next

        if(temp2 == None) :
            temp3.next = temp1
            

        if(temp1 == None) :
            temp3.next = temp2

        return res.next
            





