import re


def main():
    S = input()
    T = input()

    S_diff = ""

    for c in S:
        res = T.find(c)
        if c == '@':
            S_diff += c
            continue

        if res != -1:
            if res == 0:
                T = T[res+1:]
            else:
                T = T[:res] + T[res+1:]
        else:
            S_diff += c

    # print(S_diff)
    # print(T)

    if re.search(r"[^atcoder@]", S_diff) is not None or re.search(r"[^atcoder@]", T) is not None:
        print("No")
        return

    S_at = S_diff.count('@')
    T_at = T.count('@')
    S_len = len(S_diff)
    T_len = len(T)

    if S_at >= T_len - T_at and T_at >= S_len - S_at:
        print("Yes")
    else:
        print("No")


if __name__ == "__main__":
    main()
