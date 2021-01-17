def generate_primes (n: int) :
    primes=[]
    is_prime = [False,False] + [True] * (n-1)
    is_prime[0]=0
    is_prime[1]=0
    for p in range(2,n+1):
        if is_prime[p]:
            primes.append(p)
            for i in range(p*2,n+1,p):
                is_prime[i]=False
    return primes

def main():
    print(generate_primes(9))

if __name__ == "__main__":
    main()
