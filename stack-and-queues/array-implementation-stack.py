class Stack : 
    top = -1
    size = 10
    arr = [0] * size

    def push(self,ele) :
        if(self.top+1 == self.size) :
            print ("Stack is already full")
            return 
        self.arr[self.top+1] = ele
        self.top += 1

    def pop(self) :
        if self.top == -1 :
            print("Stack is already empty")
            return None
        ele = self.arr[self.top]
        self.top -= 1
        return ele

    def peek(self) :
        if self.top == -1 :
                    print("Stack is already empty")
                    return None
        return self.arr[self.top]

    def size(self) : 
        return  self.top+1
        

s = Stack()
s.push(1)
s.push(2)
print(s.peek())
print(s.pop())
print(s.peek())
print(s.size())









