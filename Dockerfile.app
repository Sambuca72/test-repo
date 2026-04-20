FROM gcc:latest

RUN apt-get update && apt-get install -y cmake git

WORKDIR /app

COPY . .

RUN cmake -B build -S . && cmake --build build

CMD ["./build/testproj"]