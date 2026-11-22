# flattening of the linkedlist
class Node :
    def __init__(self,data,next =  None,child = None):
        self.data = data
        self.next = next
        self.child = child

class Solution : 


    def merge_sorted_lists (self, head1,head2) :
        if head1 == None :
            return head2

        if head2 == None :
            return head1

        dummy_node = Node(-1)
        res = dummy_node

        while(head1 != None and head2 != None) : 
            if head1.data <= head2.data : 
                res.child = head1
                head1 = head1.child
                res = res.child

            else :
                res.child = head2
                head2 = head2.child
                res = res.child
            res.next = None

        if head1 == None :
            res.child = head2

        if head2 == None :
            res.child = head1

        return dummy_node.child

    def main (self,head) : 

        if head == None or head.next == None :
            return head

        t1 = head
        next_node = head.next

        while(next_node != None) :
            t2 = next_node
            next_node = t2.next
            new_head = self.merge_sorted_lists(t1,t2)
            t1 = new_head

        return t1

    def recurrsive (self,head) : 
        if(head == None or head.next == None) : 
            return head

        merged_head = self.recurrsive(head.next)
        return self.merge_sorted_lists(head , merged_head)


