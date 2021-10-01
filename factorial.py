def fact(number: int) -> int:
    if number <= 1:
        return 1
    else:
        return number * fact(number - 1)


if __name__ == "__main__":
    print(fact(5))
    print(fact(12))
    print(fact(13))
