def getMaxOutfits(money, outfits):

    how_many_outfits_current = 0
    how_many_outfits_max = 0

    for x in range(len(outfits)):
        money_tmp = money - outfits[x]

        if money_tmp >= 0:
            how_many_outfits_current += 1

        for y in range(x + 1, len(outfits)):
            money_tmp = money_tmp - outfits[y]

            if money_tmp < 0:
                break

            how_many_outfits_current += 1

        if how_many_outfits_max < how_many_outfits_current:
            how_many_outfits_max = how_many_outfits_current

        how_many_outfits_current = 0

    return how_many_outfits_max

print("q1")
print(getMaxOutfits(2, [1,3,1,3,2]) == 1)
print(getMaxOutfits(5, [2,3,5,1,1,2,1]) == 4)
print(getMaxOutfits(1, [1]) == 1)
print(getMaxOutfits(4, [5,45,10]) == 0)
print(getMaxOutfits(10, [1,2,3,4]) == 4)
print(getMaxOutfits(4, [3,3,1,2,1]) == 3)
print(getMaxOutfits(4, [3,1,2,1,3]) == 3)
print(getMaxOutfits(4, [1,2,1,3,3]) == 3)
print(getMaxOutfits(4, [100,100,1,2,1]) == 3)
print(getMaxOutfits(4, [100,1,2,1,100]) == 3)
print(getMaxOutfits(4, [1,2,1,100,100]) == 3)
print(getMaxOutfits(4, [3,2,1,100,100]) == 2)
print(getMaxOutfits(6, [3,1,1,2,2,2]) == 4)