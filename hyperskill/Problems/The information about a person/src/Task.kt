import java.util.Scanner

fun main(args: Array<String>) {
    val scanner = Scanner(System.`in`)
    val last = scanner.next().first()
    val first = scanner.next()
    val age = scanner.nextInt()

    print("$last. $first, $age years old")
}