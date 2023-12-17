fun main() {
    val n = readLine()!!.toInt()
    val arr = readLine()!!.split(" ").map { it.toInt() }.toMutableList()

    arr.sort()
    val sett = mutableSetOf<Int>()

    for (i in arr.size - 1 downTo 0) {
        if (arr[i] + 1 !in sett && arr[i] + 1 <= 150001) {
            sett.add(arr[i] + 1)
            arr[i] += 1
        } else if (arr[i] !in sett) {
            sett.add(arr[i])
        } else if (arr[i] - 1 !in sett && arr[i] - 1 > 0) {
            sett.add(arr[i] - 1)
            arr[i] -= 1
        }
    }

    println(sett.size)
}
