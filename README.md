* app

  The executable that gets built.

* hello

  A shared libary that gets built and linked in.

* external

  A shared libary that has to be built separately, and is then linked in as an external library reference.

```
# Build the external libary first.
pushd external
cmake .
make

# Build the test app.
popd
cmake .
make
```