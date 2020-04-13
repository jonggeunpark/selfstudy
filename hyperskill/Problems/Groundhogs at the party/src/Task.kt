import java.util.*

fun main(args: Array<String>) {
    val scanner = Scanner(System.`in`)
    val a = scanner.nextInt()
    val b = scanner.nextBoolean()
    print((a >= 10 && a <= 20 && !b) || (a >= 15 && a <= 25 && b))
}