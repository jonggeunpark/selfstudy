import java.util.Scanner

fun main(args: Array<String>) {
    val scanner = Scanner(System.`in`)
    var a = scanner.nextInt()
    print(a%10)
    a /= 10
    print(a%10)
    a /= 10
    print(a%10)
}