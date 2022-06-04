def algo(int m, int n):
    if m > n:
        small = n
    else:
        small = m
    while m % small == 0 and n % small == 0:
        small -= 1
    return small

if __name__ == '__main__':
    print("enter the two numbers:")
    m = int(input())
    n = int(input())
    print("the gcd of %d and %d is %d" % (m, n, abd(m, n)))