package codigos-reutilizaveis

import (
  "strconv"
  "strings"
)

func timeConversion(s string) string {
    // Write your code here
    var h int
    var control, hStr string
    control = string(s[8]) + string(s[9])
    if control == "PM" {
        s = strings.Trim(s, "PM")
        hours, _ := strconv.ParseInt(string(s[0])+string(s[1]), 10, 64)
        if hours == 12 {
            hStr = "12"
        } else {
            h = int(hours) + 12
            hStr = strconv.Itoa(h)
        }
    } else {
        s = strings.Trim(s, "AM")
        hours, _ := strconv.ParseInt(string(s[0])+string(s[1]), 10, 64)
        if hours == 12 {
            hStr = "00"
        } else {
            h = int(hours)
            hStr = strconv.Itoa(h)
            if h < 10 {
                hStr = "0" + hStr
            }
        }
    }
    res1 := strings.Replace(s, string(s[0])+string(s[1]), hStr, 1)
  
    return res1
}
