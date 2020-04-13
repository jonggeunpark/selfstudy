package machine
import java.util.Scanner

fun main(args: Array<String>) {
    val scanner = Scanner(System.`in`)
    val numOfCups = scanner.nextInt()
    val numOfWater = 200 * numOfCups
    val numOfMilk = 50 * numOfCups
    val numOfCoffeeBeans = 15 * numOfCups
    println("For " + numOfCups + " cups of coffee you will need:")
    println("" + numOfWater + " ml of water")
    println("" + numOfMilk + " ml of milk")
    println("" + numOfCoffeeBeans + " g of coffee beans")
}
