def parity(x: int) -> int:
    result = 0
    while x:
        result = result ^ 1
        x = x & (x - 1) # this drops the lowest set bit of x
    return result

