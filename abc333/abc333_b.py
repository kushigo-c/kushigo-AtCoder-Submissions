s=input()
t=input()
dic={"AB":1,"BC":1,"CD":1,"DE":1,"EA":1,"BA":1,"CB":1,"DC":1,"ED":1,"AE":1,
  "AC":2,"AD":2,"BD":2,"BE":2,"CE":2,"CA":2,"DA":2,"DB":2,"EB":2,"EC":2,
  "CA":2,"DA":2,"DB":2,"EB":2,"EC":2,"AC":2,"Ad":2,"BD":2,"BE":2,"CE":2,
}
print("Yes" if dic[s]==dic[t] else "No")