import ctypes

lib = ctypes.cdll.LoadLibrary("libfoo.so")

foo_raw = lib.foo

print foo_raw
ok = ctypes.c_int()
print "Foo return was:", foo_raw("42", ctypes.byref(ok))
print "Ok is:", ok.value

