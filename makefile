dynamiclib:
	cl /LD /EHsc sum.c

staticlib:
	cl /c /EHsc sum.c
	lib sum.obj /out:ssum.lib

clean:
	del *.exp
	del *.obj

cleanall:
	del *.exp
	del *.obj
	del *.lib
	del *.dll
