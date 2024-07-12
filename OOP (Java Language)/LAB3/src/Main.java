public class Main {
    public static void main(String[] args)
    {
        Bank user1 = new Bank("Srijon", "245687");
        Bank user2 = new Bank("Tamanna", "124563");
        user1.deposit_money(200);
        user1.withdraw_money(50);

        user2.deposit_money(500);
        user2.withdraw_money(150);

        System.out.println(user1.uName+" "+user1.deposit);
        System.out.println(user2.uName+" "+user2.deposit);
        System.out.println(user1.current_balance());

    }
}