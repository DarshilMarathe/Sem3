evenhaikya n = do 
                if n `mod` 2 == 0 
                then True
                else False

main = print (evenhaikya 12)