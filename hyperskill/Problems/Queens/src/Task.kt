import java.util.*

fun main(args: Array<String>) {
    val scanner = Scanner(System.`in`)
    var x1 = scanner.nextInt()
    var y1 = scanner.nextInt()
    var x2 = scanner.nextInt()
    var y2 = scanner.nextInt()

    if(x1 == x2 || y1 == y2)
    {
        print("YES")
    }
    else if(Math.abs(x1 - x2) == Math.abs(y1 - y2))
    {
        print("YES")
    }
    else
    {
        print("NO")
    }
}