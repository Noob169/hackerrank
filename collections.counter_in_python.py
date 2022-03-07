from collections import Counter as ct
total_sales=0
no_of_shoes=int(input())
shoe_sizes=input()
no_of_customers=int(input())
shoe_list=ct(shoe_sizes.split())
customer_shoes=[input().split() for i in range(no_of_customers)]
for i in customer_shoes:
    if shoe_list[i[0]]==0:
        continue
    else:
        total_sales+=(int(i[1]))
        shoe_list[i[0]]-=1      
print(total_sales)

