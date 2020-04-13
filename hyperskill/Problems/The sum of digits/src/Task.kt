import java.util.Scanner

fun main(args: Array<String>) {
    val scanner = Scanner(System.`in`)
    var b = 0
    var a = scanner.nextInt()
    b += a%10
    a /= 10
    b += a%10
    a /= 10
    b += a%10
    print(b)
}