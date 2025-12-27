function CountDigit(no)
{
    let iCount = 0;
   
    while(no!=0)
    {
        iCount++;
        no =Math.floor(no /10);  
    }
    return iCount;
}
function main()
{
   let iVlaue = 721;
   let iRet = 0;
   iRet = CountDigit(iVlaue);
   console.log(`${iVlaue} contains ${iRet} Digits`);
}
    

main();


