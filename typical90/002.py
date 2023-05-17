import itertools

def main():
    N = int(input())

    if N % 2:
        return
    
    NN = N // 2
    patterns = set(["".join(p) for p in itertools.permutations("(" * NN + ")" * NN)])

    for pattern in patterns:
        point = 0

        for c in pattern:
            if c == "(":
                point += 1
            elif c == ")":
                point -= 1
            
            if point < 0:
                break
        else:
            print(pattern)

if __name__ == "__main__":
    main()