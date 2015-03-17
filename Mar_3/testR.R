g <- 9.8  ##metros sobre segundos
n <- 25
tt <- seq(0,3.4,len=n) ##time in secs, t is a base funtion
f <- 56.67 - 0.5*g*tt^2
y <- f + rnorm(n,sd=1)

##Distancia en m, tiempo en s

galileo <- data.frame(distancia = y, tiempo = tt)

ggplot(galileo) + geom_polygon(aes(x = tiempo, y = distancia))


