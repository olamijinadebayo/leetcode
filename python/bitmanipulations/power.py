def power(x: float, y: int) -> float:
    result = 1.0
    power = y

    if y < 0:
        power = -power
        x = 1.0 / x
    while power:
        if power & 1:
            result = result * x
        x = x * x
        power = power >> 1

    return result
