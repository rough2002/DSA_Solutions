class Node : 
    def __init__(self,data,next):

        self.data = data
        self.next = next

class Solution : 
    def brute (self,head1 , head2) :
        map = {}
        temp = head1

        while temp != None : 
            map[temp] = 1
            temp = temp.next

        temp = head2

        while temp != None : 
            if temp in map :
                return temp
            temp = temp.next

        return None

    def collision(self,head1,head2,diff) :
        temp1 = head1
        temp2 = head2

        for i in range(diff) :
            temp1 = temp1.next

        while(temp1 != temp2) :
            temp1 = temp1.next
            temp2 = temp2.next

        return temp1

    def length_based( self, head1, head2) :
        if head1 == None or head2 == None:
            return None

        l1 = 0
        l2 = 0

        temp = head1
        while(temp!= None) :
            l1 += 1
            temp = temp.next

        temp = head2
        while(temp!= None) :
                    l2 += 1
                    temp = temp.next
        


        if(l1 > l2) :
            common_point = self.collision(head1,head2,l1-l2)
        else :
            common_point = self.collision(head2,head1 , l2-l1)

        return common_point

    def optimized(self,head1 , head2) :
        if head1 == None or head2 == None:
                     return None

        temp1 = head1
        temp2 = head2

        while (temp1 != temp2) :
            temp1 = temp1.next
            temp2 = temp2.next

            if temp2 == temp1 :
                 return temp1

            if temp1 == None :
                 temp1 = head2

            if temp2 == None :
                 temp2 = head1
             
         




            
        