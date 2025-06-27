# Синтаксис
class Dog:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def print_atr(self):
        print(self.name)
        print(self.age)


    def text(self, name_1):
        return f"name = {name_1}"


n = Dog("jahedkjdsf", 5)
n.print_atr()
print(n.text("hkjdsf"))
