def column_swap(arr, column):

    for j in range(len(arr)):

        tmp = len(arr) - 1

        for k in range(int(len(arr) / 2)):

            arr[k][j], arr[tmp][j] = arr[tmp][j], arr[k][j]

            tmp -= 1