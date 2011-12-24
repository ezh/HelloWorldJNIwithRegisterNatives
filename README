HelloWorldJNIwithRegisterNatives
=============

It is not so easy to find project for scala with JNI call.

The first step is always the hardest. I want to make it a bit easy for others.

Another version of JNI. Work like a charm with openjdk. javah of openjdk unable to generate header files of scala singleton.

How to build / run
------------

sbt compile
sbt run

Also there is a simple build.sbt. Please call 'sbt compile' 'sbt clean' directly to use GNU make

Exaple output
-------------

$ sbt compile
Please use CMSClassUnloadingEnabled in place of CMSPermGenSweepingEnabled in the future
[info] Set current project to HelloWorldAndroidJNI (in build file:/..../HelloWorldJNIwithRegisterNatives/)
[info] Updating {file:/..../HelloWorldJNIwithRegisterNatives/}default-9f1704...
[info] Resolving org.scala-lang#scala-library;2.9.1 ...
[info] Done updating.
[info] Compiling 1 Scala source to /..../HelloWorldJNIwithRegisterNatives/target/scala-2.9.1/classes...
[warn] method error in object Predef is deprecated: Use sys.error(message) instead
[warn] method error in object Predef is deprecated: Use sys.error(message) instead
[warn] method error in object Predef is deprecated: Use sys.error(message) instead
[warn] method error in object Predef is deprecated: Use sys.error(message) instead
[warn] four warnings found
mkdir target/obj
gcc -fPIC -c -O -o target/obj/HelloWorldJNIwithRegisterNatives.o -I/opt/icedtea-bin-7.2.0/jre/include -I/opt/icedtea-bin-7.2.0/jre/include/linux -I/opt/icedtea-bin-7.2.0/jre/../include -I/opt/icedtea-bin-7.2.0/jre/../include/linux src/main/c/HelloWorldJNIwithRegisterNatives.c
mkdir target/so
gcc -fPIC -shared -o target/so/libHelloWorldJNIwithRegisterNatives.so target/obj/HelloWorldJNIwithRegisterNatives.o
[success] Total time: 1 s, completed 25.12.2011 1:32:13

$ sbt run
Please use CMSClassUnloadingEnabled in place of CMSPermGenSweepingEnabled in the future
[info] Set current project to HelloWorldAndroidJNI (in build file:/..../HelloWorldJNIwithRegisterNatives/)
[info] java.library.path: ./target/so
[info] Hello World!, 5 + 5 = 10
[success] Total time: 1 s, completed 25.12.2011 1:32:19

Best regards.
