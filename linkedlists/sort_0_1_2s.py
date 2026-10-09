class Node: 
    def __init__(self,data):
        self.data = data
        self.next = None

node1 = Node(1)
node2 = Node(2)
node3 = Node(0)
node4 = Node(1)
node5 = Node(0)

node1.next = node2
node2.next = node3
node3.next = node4
node4.next = node5


def func(head :Node) :
    if head == None or head.next == None : 
        return head

    dummy_zero = Node(-1)
    dummy_one = Node(-1)
    dummy_two = Node(-1)
    zero_head = dummy_zero
    one_head = dummy_one
    two_head = dummy_two


    temp  = head

    while temp : 
        if temp.data == 0 :
            dummy_zero.next = temp
            dummy_zero = dummy_zero.next
        if temp.data == 1 :
            dummy_one.next = temp
            dummy_one = dummy_one.next
        else :      
            dummy_two.next = temp
            dummy_two = dummy_two.next

        temp = temp.next

    # now joining the lists

    dummy_zero.next = one_head.next
    dummy_one.next = two_head.next
    zero_head = zero_head.next
    dummy_two.next = None

    return zero_head

new_head = func(node1)
temp = new_head

while temp : 
        print(temp.data)
        print("\n")
        temp = temp.next
