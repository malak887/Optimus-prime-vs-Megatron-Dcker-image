FROM alpine:latest

RUN apk add --no-cache g++

WORKDIR /app

COPY . .

RUN g++ -o main main.cpp characters.cpp Robots.cpp Weopon.cpp

CMD ["./main"]

