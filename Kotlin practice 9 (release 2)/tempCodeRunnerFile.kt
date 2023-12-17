fun main() {
    val n = readLine()!!.toInt()
    val arr = mutableListOf<Int>()

    repeat(n) {
        val temp = readLine()!!.toInt()
        arr.add(temp)
    }

    arr.sort()
    val sett = mutableSetOf<Int>()

    for (i in arr.indices) {
        if (arr[i] in sett) {
            if (arr.getOrNull(i - 1) ?: 0 > 0 && arr[i] - 1 !in sett) {
                sett.add(arr[i] - 1)
            } else if (arr.getOrNull(i + 1) ?: 0 <= 150001 && arr[i] + 1 !in sett) {
                sett.add(arr[i] + 1)
            }
        } else {
            sett.add(arr[i])
        }
    }

    println(sett.size)
}
