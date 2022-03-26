def numDuplicates(name, price, weight):

    num_dupes = 0
    dupes_which = []

    for x in range(len(name)):

        for y in range(x + 1, len(name)):

            if (name[x] == name[y] and price[x] == price[y]) and weight[x] == weight[y]:
                dupes_which.append(y)

                for z in range(len(dupes_which)):
                    if dupes_which[z] == x:
                        break

                    elif z == (len(dupes_which) - 1):
                        num_dupes += 1

    return num_dupes


numDuplicates(name, price, weight)