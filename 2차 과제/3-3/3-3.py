def main() :
    count = int(0)
    sale = [[[63, 84, 140, 130], [157, 209, 251, 312]],
            [[59, 80, 130, 135], [149, 187, 239, 310]]]
    for dex1 in range(2):
        for dex2 in range(2):
            for dex3 in range(4):
                print(f"address : {id(sale[dex1][dex2][dex3])} sale[{count}]= {sale[dex1][dex2][dex3]}")
                count+=1

if __name__ == "__main__":
    main()