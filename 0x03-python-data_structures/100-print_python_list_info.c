#include <listobject.h>
#include <object.h>

void print_python_list_info(PyObject *p)
{
	int i = 0, k = PyList_Size(p);

	for (;i < size; ++i)
		printf("[*] Size of the Python List = %d", k);
}
