import random
from force_users import *

losers = []
champions = [
    LightsaberUser("Luke Skywalker",20),
    LightsaberUser("Jaden Korr",40),
    LightSideForceUser("A'Sharad Hett",45),
    LightSideForceUser("Asajj Ventress",20),
    DarkSideForceUser("Emperor Palpatine",30),
    DarkSideForceUser("Darth Vader",50),
    JediMaster("Mlem Invader",25),
    JediMaster("Ktostam Gdziestam",10),
    SithLord("Abc Def",5),
    SithLord("Cos Ktos",2),
]
czampil = random.randint(2,len(champions))
while czampil > 1:
    attacker = random.choice(champions)
    target = attacker

    while attacker == target:
        target = random.choice(champions)

    attacker.attack(target)
    if target.life_points <= 0:
        print target.name + " died."
        losers.append(target.name)
        champions.remove(target)
        czampil-=1

print ""
print "The winner is " + champions[0].name
print ""
print "At the end these people died:"
i = 0
for i in range(len(losers)):
    print losers[i]