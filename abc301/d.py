def main():
    S = input()
    N = int(input())

    S_len = len(S)
    # num = 0
    SS = ""
    for i in range(S_len):
        i_bit = S_len - i - 1

        if S[i] != '?':
            # if S[i] == '1':
            #     num += 2 ** i_bit

            SS += S[i]
            continue

        if int(SS + '1' + S[i+1:].replace('?', '0'), base=2) <= N:
            SS += '1'
            # num += 2 ** i_bit
        else:
            SS += '0'

    num = int(SS, base=2)

    if num > N:
        print("-1")
    else:
        print(num)


if __name__ == "__main__":
    main()
