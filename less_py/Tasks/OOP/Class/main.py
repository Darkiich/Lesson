class Cat:
    def __init__(self, name, species): # Параметр self - ссылка на экземпляр класса
        self.name = name # self.name - атрибут(переменная), который инициализируется при создании экземляра
        self.species = species

    def infoAnimal(self):
        print(f"Имя: {self.name}\nПорода: {self.species}")

    def kissAnimal(self):
        print(f"\n{self.name} мурчит")

    def __del__(self):
        print("Класс больше не исопользуется! Удаляем из памяти")


animal = Cat("Kuzya", "Turkey_Angor") # Создание экземпляра класса
animal.infoAnimal()
animal.kissAnimal()