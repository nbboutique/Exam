FROM gcc:latest
MAINTAINER Ahafonova Myroslava
COPY . /usr/src/cpp_test
WORKDIR /usr/src/cpp_test
RUN g++ -o Test main.cpp
CMD ["./Test"]
