def check(s: str) -> bool:
    point = 0

    for c in s:
        if c == "0":
            point += 1
        elif c == "1":
            point -= 1

        if point < 0:
            return False
    
    return point == 0

def main():
    N = int(input())

    if N % 2:
        return

    for i in range(2 ** N):
        ii = format(i, f"0{N}b")

        if check(ii):
            print(ii.replace("0", "(").replace("1", ")"))



if __name__ == "__main__":
    main()