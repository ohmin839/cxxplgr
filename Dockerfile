FROM leimao/boost:1.87.0

RUN apt-get install -qy \
        libsqlite3-dev \
        sqlite3 \
    && apt-get clean

USER 1000