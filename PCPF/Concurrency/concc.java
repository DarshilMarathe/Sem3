class thread1 implements Runnable
{
    public void run()
    {
        for(int i=0 ; i<=10 ; i++)
        {
            System.out.println("2 *" + i + " = " + (i*2));
            try
            {
                Thread.sleep(500);
            }
            catch(Exception e) { }
        }
    }
}

class thread2 implements Runnable
{
    public void run()
    {
        for(int i=0 ; i<=10 ; i++)
        {
            System.out.println("10 *" + i + " = " + (i*10));
            try
            {
                Thread.sleep(500);
            }
            catch(Exception e) { }
        }
    }
}

class concc
{
    public static void main(String[] args)
    {
        thread1 h1 = new thread1();
        thread2 h2 = new thread2();

        Thread t1 = new Thread(h1);
        Thread t2 = new Thread(h2);

        t1.start();
        t2.start();
    }
}