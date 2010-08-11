/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_invalidargumentexception_h__
#define __GENERATED_cls_invalidargumentexception_h__

#include <cls/logicexception.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 95 */
class c_invalidargumentexception : public c_logicexception {
  BEGIN_CLASS_MAP(invalidargumentexception)
    PARENT_CLASS(exception)
    PARENT_CLASS(logicexception)
  END_CLASS_MAP(invalidargumentexception)
  DECLARE_CLASS_COMMON(invalidargumentexception, InvalidArgumentException)
  DECLARE_INVOKE_EX(invalidargumentexception, InvalidArgumentException, logicexception)

  // DECLARE_STATIC_PROP_OPS
  public:
#define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_invalidargumentexception 1
#define OMIT_JUMP_TABLE_CLASS_STATIC_GET_invalidargumentexception 1
#define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_invalidargumentexception 1
#define OMIT_JUMP_TABLE_CLASS_CONSTANT_invalidargumentexception 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
#define OMIT_JUMP_TABLE_CLASS_GETARRAY_invalidargumentexception 1
#define OMIT_JUMP_TABLE_CLASS_SETARRAY_invalidargumentexception 1
#define OMIT_JUMP_TABLE_CLASS_exists_invalidargumentexception 1
#define OMIT_JUMP_TABLE_CLASS_exists_PRIVATE_invalidargumentexception 1
#define OMIT_JUMP_TABLE_CLASS_get_invalidargumentexception 1
#define OMIT_JUMP_TABLE_CLASS_get_PRIVATE_invalidargumentexception 1
#define OMIT_JUMP_TABLE_CLASS_set_invalidargumentexception 1
#define OMIT_JUMP_TABLE_CLASS_set_PRIVATE_invalidargumentexception 1
#define OMIT_JUMP_TABLE_CLASS_lval_invalidargumentexception 1
#define OMIT_JUMP_TABLE_CLASS_lval_PRIVATE_invalidargumentexception 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
#define OMIT_JUMP_TABLE_CLASS_exists_PUBLIC_invalidargumentexception 1
#define OMIT_JUMP_TABLE_CLASS_get_PUBLIC_invalidargumentexception 1
#define OMIT_JUMP_TABLE_CLASS_set_PUBLIC_invalidargumentexception 1
#define OMIT_JUMP_TABLE_CLASS_lval_PUBLIC_invalidargumentexception 1

  // DECLARE_COMMON_INVOKE
#define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_invalidargumentexception 1
  virtual Variant o_invoke(MethodIndex methodIndex, const char *s,CArrRef ps, int64 h,
                           bool f = true);
  virtual Variant o_invoke_few_args(MethodIndex methodIndex, const char *s, int64 h,
                                    int count,
                                    INVOKE_FEW_ARGS_DECL_ARGS);

  public:
  DECLARE_INVOKES_FROM_EVAL
  void init();
};
extern struct ObjectStaticCallbacks cw_invalidargumentexception;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_invalidargumentexception_h__
