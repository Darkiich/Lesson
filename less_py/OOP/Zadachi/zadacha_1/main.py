class Gun:
    def __init__(self, name, time_reload, count_patron, max_ammo, rate_of_fire, damage):
        self.name = name
        self.time_reload = time_reload
        self.count_patron = count_patron
        self.max_ammo = max_ammo
        self.rate_of_fire = rate_of_fire
        self.damage = damage

    def reload(self):
        if self.count_patron == self.max_ammo:
            print("Магазин уже полон!")
        else:
            print(f"Перезарядка магазина автомата...")
            self.count_patron = self.max_ammo
            print("Перезарядка завершена.")

    def shoot(self):
        if self.count_patron > 0:
            self.count_patron -= 1
            print(f"Выстрел с оружия {self.name}! Нанесен урон {self.damage}. Осталось патронов: {self.count_patron}")
        else:
            print("Нужна перезарядка! Магазин пуст.")


object_class = Gun("NyanCat", 7, 50, 50, 1, 100)
object_class.shoot()
object_class.shoot()
object_class.reload()
object_class.shoot()