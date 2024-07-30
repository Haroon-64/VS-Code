#include "init.c"
#include "getargs.c"
#include "getargsfast.c"
#include "int_ops.c"
#include "float_ops.c"
#include "str_ops.c"
#include "bytes_ops.c"
#include "list_ops.c"
#include "dict_ops.c"
#include "set_ops.c"
#include "tuple_ops.c"
#include "exc_ops.c"
#include "misc_ops.c"
#include "generic_ops.c"
#include "__native.h"
#include "__native_internal.h"
static PyMethodDef module_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "Broadcasting",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    module_methods
};

PyMODINIT_FUNC PyInit_Broadcasting(void)
{
    PyObject* modname = NULL;
    if (CPyModule_Broadcasting_internal) {
        Py_INCREF(CPyModule_Broadcasting_internal);
        return CPyModule_Broadcasting_internal;
    }
    CPyModule_Broadcasting_internal = PyModule_Create(&module);
    if (unlikely(CPyModule_Broadcasting_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_Broadcasting_internal, "__name__");
    CPyStatic_globals = PyModule_GetDict(CPyModule_Broadcasting_internal);
    if (unlikely(CPyStatic_globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef___top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_Broadcasting_internal;
    fail:
    Py_CLEAR(CPyModule_Broadcasting_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef___top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    void *cpy_r_r7;
    void *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    CPyPtr cpy_r_r21;
    CPyPtr cpy_r_r22;
    CPyPtr cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    CPyPtr cpy_r_r31;
    CPyPtr cpy_r_r32;
    CPyPtr cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    CPyPtr cpy_r_r41;
    CPyPtr cpy_r_r42;
    CPyPtr cpy_r_r43;
    CPyPtr cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyPtr cpy_r_r46;
    CPyPtr cpy_r_r47;
    CPyPtr cpy_r_r48;
    CPyPtr cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject **cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject **cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject **cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject **cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject **cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", -1, CPyStatic_globals);
        goto CPyL28;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_numpy;
    PyObject **cpy_r_r6[1] = {cpy_r_r5};
    cpy_r_r7 = (void *)&cpy_r_r6;
    int64_t cpy_r_r8[1] = {1};
    cpy_r_r9 = (void *)&cpy_r_r8;
    cpy_r_r10 = CPyStatics[18]; /* (('numpy', 'numpy', 'np'),) */
    cpy_r_r11 = CPyStatic_globals;
    cpy_r_r12 = CPyStatics[6]; /* 'Broadcasting.py' */
    cpy_r_r13 = CPyStatics[7]; /* '<module>' */
    cpy_r_r14 = CPyImport_ImportMany(cpy_r_r10, cpy_r_r7, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r9);
    if (!cpy_r_r14) goto CPyL28;
    cpy_r_r15 = PyList_New(4);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 3, CPyStatic_globals);
        goto CPyL28;
    }
    cpy_r_r16 = PyFloat_FromDouble(56.0);
    cpy_r_r17 = PyFloat_FromDouble(0.0);
    cpy_r_r18 = PyFloat_FromDouble(4.4);
    cpy_r_r19 = PyFloat_FromDouble(68.0);
    cpy_r_r20 = (CPyPtr)&((PyListObject *)cpy_r_r15)->ob_item;
    cpy_r_r21 = *(CPyPtr *)cpy_r_r20;
    *(PyObject * *)cpy_r_r21 = cpy_r_r16;
    cpy_r_r22 = cpy_r_r21 + 8;
    *(PyObject * *)cpy_r_r22 = cpy_r_r17;
    cpy_r_r23 = cpy_r_r21 + 16;
    *(PyObject * *)cpy_r_r23 = cpy_r_r18;
    cpy_r_r24 = cpy_r_r21 + 24;
    *(PyObject * *)cpy_r_r24 = cpy_r_r19;
    cpy_r_r25 = PyList_New(4);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 4, CPyStatic_globals);
        goto CPyL29;
    }
    cpy_r_r26 = PyFloat_FromDouble(1.2);
    cpy_r_r27 = PyFloat_FromDouble(104.0);
    cpy_r_r28 = PyFloat_FromDouble(52.0);
    cpy_r_r29 = PyFloat_FromDouble(8.0);
    cpy_r_r30 = (CPyPtr)&((PyListObject *)cpy_r_r25)->ob_item;
    cpy_r_r31 = *(CPyPtr *)cpy_r_r30;
    *(PyObject * *)cpy_r_r31 = cpy_r_r26;
    cpy_r_r32 = cpy_r_r31 + 8;
    *(PyObject * *)cpy_r_r32 = cpy_r_r27;
    cpy_r_r33 = cpy_r_r31 + 16;
    *(PyObject * *)cpy_r_r33 = cpy_r_r28;
    cpy_r_r34 = cpy_r_r31 + 24;
    *(PyObject * *)cpy_r_r34 = cpy_r_r29;
    cpy_r_r35 = PyList_New(4);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 5, CPyStatic_globals);
        goto CPyL30;
    }
    cpy_r_r36 = PyFloat_FromDouble(1.8);
    cpy_r_r37 = PyFloat_FromDouble(135.0);
    cpy_r_r38 = PyFloat_FromDouble(99.0);
    cpy_r_r39 = PyFloat_FromDouble(0.9);
    cpy_r_r40 = (CPyPtr)&((PyListObject *)cpy_r_r35)->ob_item;
    cpy_r_r41 = *(CPyPtr *)cpy_r_r40;
    *(PyObject * *)cpy_r_r41 = cpy_r_r36;
    cpy_r_r42 = cpy_r_r41 + 8;
    *(PyObject * *)cpy_r_r42 = cpy_r_r37;
    cpy_r_r43 = cpy_r_r41 + 16;
    *(PyObject * *)cpy_r_r43 = cpy_r_r38;
    cpy_r_r44 = cpy_r_r41 + 24;
    *(PyObject * *)cpy_r_r44 = cpy_r_r39;
    cpy_r_r45 = PyList_New(3);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 3, CPyStatic_globals);
        goto CPyL31;
    }
    cpy_r_r46 = (CPyPtr)&((PyListObject *)cpy_r_r45)->ob_item;
    cpy_r_r47 = *(CPyPtr *)cpy_r_r46;
    *(PyObject * *)cpy_r_r47 = cpy_r_r15;
    cpy_r_r48 = cpy_r_r47 + 8;
    *(PyObject * *)cpy_r_r48 = cpy_r_r25;
    cpy_r_r49 = cpy_r_r47 + 16;
    *(PyObject * *)cpy_r_r49 = cpy_r_r35;
    cpy_r_r50 = CPyModule_numpy;
    cpy_r_r51 = CPyStatics[8]; /* 'array' */
    cpy_r_r52 = CPyObject_GetAttr(cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 3, CPyStatic_globals);
        goto CPyL32;
    }
    PyObject *cpy_r_r53[1] = {cpy_r_r45};
    cpy_r_r54 = (PyObject **)&cpy_r_r53;
    cpy_r_r55 = _PyObject_Vectorcall(cpy_r_r52, cpy_r_r54, 1, 0);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 3, CPyStatic_globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_r45);
    cpy_r_r56 = CPyStatic_globals;
    cpy_r_r57 = CPyStatics[9]; /* 'A' */
    cpy_r_r58 = CPyDict_SetItem(cpy_r_r56, cpy_r_r57, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 3, CPyStatic_globals);
        goto CPyL28;
    }
    cpy_r_r60 = CPyStatic_globals;
    cpy_r_r61 = CPyStatics[9]; /* 'A' */
    cpy_r_r62 = CPyDict_GetItem(cpy_r_r60, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 8, CPyStatic_globals);
        goto CPyL28;
    }
    cpy_r_r63 = CPyStatics[10]; /* 'sum' */
    cpy_r_r64 = CPyStatics[15]; /* 0 */
    PyObject *cpy_r_r65[2] = {cpy_r_r62, cpy_r_r64};
    cpy_r_r66 = (PyObject **)&cpy_r_r65;
    cpy_r_r67 = CPyStatics[19]; /* ('axis',) */
    cpy_r_r68 = PyObject_VectorcallMethod(cpy_r_r63, cpy_r_r66, 9223372036854775809ULL, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 8, CPyStatic_globals);
        goto CPyL33;
    }
    CPy_DECREF(cpy_r_r62);
    cpy_r_r69 = CPyStatic_globals;
    cpy_r_r70 = CPyStatics[12]; /* 'B' */
    cpy_r_r71 = CPyDict_SetItem(cpy_r_r69, cpy_r_r70, cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 8, CPyStatic_globals);
        goto CPyL28;
    }
    cpy_r_r73 = CPyStatic_globals;
    cpy_r_r74 = CPyStatics[9]; /* 'A' */
    cpy_r_r75 = CPyDict_GetItem(cpy_r_r73, cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 10, CPyStatic_globals);
        goto CPyL28;
    }
    cpy_r_r76 = CPyStatics[16]; /* 100 */
    cpy_r_r77 = PyNumber_Multiply(cpy_r_r76, cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 10, CPyStatic_globals);
        goto CPyL28;
    }
    cpy_r_r78 = CPyStatic_globals;
    cpy_r_r79 = CPyStatics[12]; /* 'B' */
    cpy_r_r80 = CPyDict_GetItem(cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 10, CPyStatic_globals);
        goto CPyL34;
    }
    cpy_r_r81 = PyNumber_TrueDivide(cpy_r_r77, cpy_r_r80);
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 10, CPyStatic_globals);
        goto CPyL28;
    }
    cpy_r_r82 = CPyStatic_globals;
    cpy_r_r83 = CPyStatics[13]; /* 'pA' */
    cpy_r_r84 = CPyDict_SetItem(cpy_r_r82, cpy_r_r83, cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 10, CPyStatic_globals);
        goto CPyL28;
    }
    cpy_r_r86 = CPyStatic_globals;
    cpy_r_r87 = CPyStatics[13]; /* 'pA' */
    cpy_r_r88 = CPyDict_GetItem(cpy_r_r86, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 12, CPyStatic_globals);
        goto CPyL28;
    }
    cpy_r_r89 = CPyModule_builtins;
    cpy_r_r90 = CPyStatics[14]; /* 'print' */
    cpy_r_r91 = CPyObject_GetAttr(cpy_r_r89, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 12, CPyStatic_globals);
        goto CPyL35;
    }
    PyObject *cpy_r_r92[1] = {cpy_r_r88};
    cpy_r_r93 = (PyObject **)&cpy_r_r92;
    cpy_r_r94 = _PyObject_Vectorcall(cpy_r_r91, cpy_r_r93, 1, 0);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 12, CPyStatic_globals);
        goto CPyL35;
    } else
        goto CPyL36;
CPyL22: ;
    CPy_DECREF(cpy_r_r88);
    cpy_r_r95 = CPyStatic_globals;
    cpy_r_r96 = CPyStatics[13]; /* 'pA' */
    cpy_r_r97 = CPyDict_GetItem(cpy_r_r95, cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 14, CPyStatic_globals);
        goto CPyL28;
    }
    cpy_r_r98 = CPyModule_builtins;
    cpy_r_r99 = CPyStatics[10]; /* 'sum' */
    cpy_r_r100 = CPyObject_GetAttr(cpy_r_r98, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 14, CPyStatic_globals);
        goto CPyL37;
    }
    PyObject *cpy_r_r101[1] = {cpy_r_r97};
    cpy_r_r102 = (PyObject **)&cpy_r_r101;
    cpy_r_r103 = _PyObject_Vectorcall(cpy_r_r100, cpy_r_r102, 1, 0);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 14, CPyStatic_globals);
        goto CPyL37;
    }
    CPy_DECREF(cpy_r_r97);
    cpy_r_r104 = CPyModule_builtins;
    cpy_r_r105 = CPyStatics[14]; /* 'print' */
    cpy_r_r106 = CPyObject_GetAttr(cpy_r_r104, cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 14, CPyStatic_globals);
        goto CPyL38;
    }
    PyObject *cpy_r_r107[1] = {cpy_r_r103};
    cpy_r_r108 = (PyObject **)&cpy_r_r107;
    cpy_r_r109 = _PyObject_Vectorcall(cpy_r_r106, cpy_r_r108, 1, 0);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("Broadcasting.py", "<module>", 14, CPyStatic_globals);
        goto CPyL38;
    } else
        goto CPyL39;
CPyL27: ;
    CPy_DECREF(cpy_r_r103);
    return 1;
CPyL28: ;
    cpy_r_r110 = 2;
    return cpy_r_r110;
CPyL29: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL28;
CPyL30: ;
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r25);
    goto CPyL28;
CPyL31: ;
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r35);
    goto CPyL28;
CPyL32: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL28;
CPyL33: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL28;
CPyL34: ;
    CPy_DecRef(cpy_r_r77);
    goto CPyL28;
CPyL35: ;
    CPy_DecRef(cpy_r_r88);
    goto CPyL28;
CPyL36: ;
    CPy_DECREF(cpy_r_r94);
    goto CPyL22;
CPyL37: ;
    CPy_DecRef(cpy_r_r97);
    goto CPyL28;
CPyL38: ;
    CPy_DecRef(cpy_r_r103);
    goto CPyL28;
CPyL39: ;
    CPy_DECREF(cpy_r_r109);
    goto CPyL27;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_Broadcasting = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_numpy = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[20];
const char * const CPyLit_Str[] = {
    "\v\bbuiltins\005numpy\002np\017Broadcasting.py\b<module>\005array\001A\003sum\004axis\001B\002pA",
    "\001\005print",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\0020\000100",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {3, 3, 4, 4, 5, 1, 17, 1, 11};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_Broadcasting_internal = NULL;
CPyModule *CPyModule_Broadcasting;
PyObject *CPyStatic_globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_numpy;
char CPyDef___top_level__(void);
