public class Bank {
    String uName;
    String holdingNumber;
    int deposit=0;

    public Bank(String uName, String holdingNumber) {
        this.uName = uName;
        this.holdingNumber = holdingNumber;
        //this.deposit = deposit;
    }
    public int deposit_money(int amount){
        if(amount>0)
        deposit += amount;
        else
            System.out.println("Please enter a positive number");
        return deposit;
    }
    public int withdraw_money(int amount)
    {
        if(deposit>0 && amount <= deposit){
            deposit -=amount;
        }
        else {
            System.out.println("Enter valid number");
        }
        return deposit;
    }
    public int current_balance(){
        return deposit;
    }

}
