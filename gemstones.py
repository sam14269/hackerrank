numRocks = int(raw_input())
rockList = []
for x in xrange(numRocks):
    rock = raw_input()
    # list of sets()
    rockList.append(set(rock))
gemElement = 0
for x in rockList[0]:
    rocks = len(rockList) - 1
    count = 0
    for y in rockList[1:]:
        if x in y:
            count += 1
            if count == rocks:
                gemElement += 1
print gemElement
