class new:
    def accept(self):
        self.n=int(input("enter1"))
    def process(self):
        for i in range(1,11):
            self.a=i*self.n
            i=i+1
            print(self.a)
d=new()
d.accept()
d.process()
