

class Node : 
    def __init__(self , data , next = None):
        self.data = data
        self.next  = next

class Solution : 
    def insert(self, head , value , k) : 

        new_node = Node(value)

        if(k == 1):
            new_node.next = head
            return new_node

        temp = head
        i = 1

        while (temp and i != k-1):
           temp = temp.next
           i += 1

        new_node.next = temp.next
        temp.next = new_node

        return head

    def insert_before_value_k(self , head , ele , k) :
        new_node = Node(ele)

        if head is None :
            return head
        
        if head.data == k :
            new_node.next = head
            return new_node

        temp = head

        while(temp.next != None) :
            if temp.next.data == k :
                new_node.next = temp.next
                temp.next = new_node
                return head
            temp = temp.next

        return head



        



