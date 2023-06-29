FROM ubuntu
LABEL maintainer="Voloshin Alexander"
RUN apt-get update && \
    apt-get install -y gcc
COPY ./MyProj_221_331_Voloshin /app
WORKDIR /app
RUN gcc -o my_Program main.cpp
CMD ["./my_Program"]