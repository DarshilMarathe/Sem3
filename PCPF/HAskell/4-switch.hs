
--Case Statements in Haskell
--Here use _  for default statement

main = do 
    let grade ='d'
    
    case grade  of 
        'D' -> putStrLn "Almost passed"
        'A' -> putStrLn "Congrats"
        'B' -> putStrLn "Good"
        'C' -> putStrLn "Can Improve"
        _ -> putStrLn "Fails"