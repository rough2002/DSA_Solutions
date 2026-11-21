class Node : 
    def __init__(self,data,next):
        self.data = data
        self.next = next


class Solution : 

    def main (self, head ,k ) : 
        temp = head
        len = 0

        while temp != None : 
            len += 1
            if(temp.next != None) :
                temp =  temp.next
            else :
                break

        # connected tail with head

        temp.next = head

        rotation = k % len
        if rotation == 0:
            temp.next = None
            return head
        
        rotation -= 1
        temp = head
        while (rotation > 0) : 
            rotation -=1
            temp = temp.next

        head = temp.next
        temp.next = None

        return head


        


            
            
            



