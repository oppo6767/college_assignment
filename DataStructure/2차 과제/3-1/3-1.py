def main() :
    sale = [157, 209, 251, 312]
    for dex1 in range(4):
        print(f"address : {id(sale[dex1])} sale[{dex1}]= {sale[dex1]}")

if __name__ == "__main__":
    main()