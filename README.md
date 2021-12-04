# jenkins pipeline

purpose: continous delivery of production grade software test runs
pipeline runs can execute: blueocean or spin them up on a containers in distributed nodes. 

1): BUILD STAGE
1)a) version control software build num.x for release num.y committed to master
1)b) version control test script to test build n.x  committed to master

2): TEST STAGE
1)a) automated testing: unit testing, integration testing, regression testing
2)b) test resultsL: log analysis and review

3): DEPLOY STAGE
1)a) Final report for num.y release.
1)a) release num.y is ready to ship to customer.


PIPELINE INFRA:
(A) Jenkins RHL version on local host for testing

(B) Linux fedora 5.14.10-300.fc35.x86_64 #1 SMP Thu Oct 7 20:48:44 UTC 2021 x86_64 x86_64 x86_64 GNU/Linux

(C) GitHub for version control builds

(D) PyCharm and CFFI: automated testing with Python for C code

(E) Pytest: for test logs

(F) Pipeline testing: docker containers


For testing specific code, such as OpenSSL, (D) and (E) can be done in C code
and C/C++ plugins are installed to do said integrated testing.


