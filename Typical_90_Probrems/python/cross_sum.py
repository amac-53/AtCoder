import numpy as np

def main():
    H, W= int(input()), int(input())
    for i in range(H):
        for j in range(W):
            A[i][j] = int(input())

    # 列，行の和を先に計算
    row_sum = np.zeros(H)
    for i in range(H):
        for j in range(W):
            row_sum[i] += A[i][j]

    col_sum = np.zeros(W)
    for i in range(H):
        for j in range(W):
            col_sum[j] += A[i][j]

    # ans
    ans = np.array((H, W))
    for i in range(H):
        for j in range(W):
            ans[i][j] = row_sum[i] + col_sum[j] - A[i][j]
            print(f'{ans[i][j]} ')
        print('\n')

if __name__ == '__main__':
    main()