
  class Program236_1 {
    public static void main(String[] args) {
        // Check if arguments are given
        if (args.length == 0) {
            System.out.println("No arguments provided!");
            System.out.println("Example: java Program236 Hello World");
        } else {
            System.out.println("Number of arguments: " + args.length);

            // Loop through each argument and print it
            for (int i = 0; i < args.length; i++) {
                System.out.println("Args[" + i + "] = " + args[i]);
            }
        }
    }
}
