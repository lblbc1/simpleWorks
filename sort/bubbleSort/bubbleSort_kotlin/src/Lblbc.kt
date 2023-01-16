/**
 * 厦门大学计算机专业 | 前华为工程师
 * 专注《零基础学编程系列》  http://lblbc.cn/blog
 * 包含：Java | 安卓 | 前端 | Flutter | iOS | 小程序 | 鸿蒙
 * 公众号：蓝不蓝编程
 */
fun main(args: Array<String>) {
    val array = intArrayOf(2, 1, 5, 4, 3)
    printArray(array)
    sort(array)
    printArray(array)
}

private fun sort(array: IntArray) {
    for (i in 0 until array.size - 1) {
        for (j in 0 until array.size - 1 - i) {
            if (array[j] > array[j + 1]) {
                val tmp = array[j + 1]
                array[j + 1] = array[j]
                array[j] = tmp
            }
        }
    }
}

private fun printArray(array: IntArray) {
    println("--------------")
    for (i in array.indices) {
        println(array[i].toString() + "")
    }
}