#include <Python.h>

static PyObject* py_echo( PyObject* self, PyObject* args ) {
   printf( "вывод из экспортированного кода!\n" );
   return Py_None;
}

static PyMethodDef ownmod_methods[] = {
   { "echo", py_echo, METH_NOARGS, "echo function" },
   { NULL, NULL }
};

static struct PyModuleDef ownmodule = {
   PyModuleDef_HEAD_INIT,
   "ownmod",   /* name of module */
   NULL, /* module documentation, may be NULL */
   -1,       /* size of per-interpreter state of the module,
                or -1 if the module keeps state in global variables. */
   ownmod_methods
};

//PyMODINIT_FUNC initownmod() {
PyMODINIT_FUNC PyInit_ownmod() {

   //(void)Py_InitModule( "ownmod", ownmod_methods );
   PyObject *m;

    m = PyModule_Create(&ownmodule);
    if (m == NULL)
        return NULL;	

}
