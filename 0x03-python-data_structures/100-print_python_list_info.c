#include <python.h>
#include <object.h>
#include <listobject.h>

void print_python_list_info(PyObject *p)
{
	int i;
	PyListObject *obj = (PyListObject *)p;
	long int size = PyList_Size(p);

	printf("[*] size of the python list = %li\n", size);
	printf("[*] Allocated = %li\n", obj->allocated);
	for (;i < size; ++i)
		printf("Element %i:%s\n", i, PY_TYPE(obj->ob_item[i])->tp_name;
}
