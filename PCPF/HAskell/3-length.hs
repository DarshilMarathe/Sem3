
len [] = 0
len (x : xs) = 1 + len xs

--main = print (length [3,4,5,2,2]) -- length inbuilt function
main = print(len [3,5,2,1,3])