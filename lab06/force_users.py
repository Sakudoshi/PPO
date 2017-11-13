import random


class ForcePower(object):
    def __init__(self, name,damage):
        self.name = name
        self.damage = random.randint((int)(damage+damage*-0.1),(int)(damage+damage*0.1))

    def __str__(self):
        return self.name + ": " + str(self.damage)


class ForceUser(object):
    life_points = 100
    available_movements = []

    def __init__(self, name,defense):
        self.name = name
        self.defense = defense
        self.available_movements = []

    def attack(self, opponent):
        drawnMovement = random.choice(self.available_movements)
        if (opponent.defense>drawnMovement.damage):
            status = "It didn't hit them"
            opponent.life_points -= drawnMovement.damage*0
        elif (opponent.defense>drawnMovement.damage/2):
            status = "It almost hit them good"
            opponent.life_points -= drawnMovement.damage/2
        else:
            status = "It hit them"
            opponent.life_points -= drawnMovement.damage

        print self.name + " attacks " + opponent.name + " with " + drawnMovement.name + ". " + status + "."
        print opponent.name + " now has " + str(opponent.life_points) + " life points."


class LightsaberUser(ForceUser):
    def __init__(self, name,defense):
        super(LightsaberUser, self).__init__(name,defense)

        self.available_movements.extend([
            ForcePower("Lightsaber Attack", 10),
            ForcePower("Lightsaber Throw", 30)
        ])


class LightSideForceUser(ForceUser):
    def __init__(self, name,defense):
        super(LightSideForceUser, self).__init__(name,defense)

        self.available_movements.extend([
            ForcePower("Mind Trick", 5),
            ForcePower("Mind Power", 35)
        ])


class JediMaster(LightsaberUser, LightSideForceUser):
    def __init__(self, name,defense):
        super(JediMaster, self).__init__(name,defense)

        self.available_movements.extend([
            ForcePower("Force Light", 35),
        ])


class DarkSideForceUser(ForceUser):
    def __init__(self, name,defense):
        super(DarkSideForceUser, self).__init__(name,defense)

        self.available_movements.extend([
            ForcePower("Force Grip", 15),
            ForcePower("Force Lightning", 45)
        ])


class SithLord(LightsaberUser, DarkSideForceUser):
    def __init__(self, name,defense):
        super(SithLord, self).__init__(name,defense)

        self.available_movements.extend([
            ForcePower("Force Rage", 30),
        ])