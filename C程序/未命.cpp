import random

def main():  
    secret_number = random.randint(1, 100)  
    attempts = 0  
      
    print("欢迎来到猜数字游戏！")  
    print(f"我已经想好了一个 1 到 100 之间的数字，你需要猜测这个数字。")

    while True:  
        try:  
            guess = int(input("请输入你的猜测："))  
        except ValueError:  
            print("请输入一个整数。")  
            continue

        attempts += 1

        if guess < secret_number:  
            print("猜小了！")  
        elif guess > secret_number:  
            print("猜大了！")  
        else:  
            print(f"恭喜你，猜对了！你一共猜了{attempts}次。")  
            break

if __name__ == "__main__":  
    main()  