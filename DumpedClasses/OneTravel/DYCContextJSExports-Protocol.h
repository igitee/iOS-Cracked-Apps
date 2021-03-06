//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class JSValue, NSString;

@protocol DYCContextJSExports <JSExport>
- (JSValue *)originalCall:(JSValue *)arg1 methodName:(NSString *)arg2 arguments:(JSValue *)arg3;
- (JSValue *)varDeclare:(JSValue *)arg1 initialValue:(JSValue *)arg2;
- (JSValue *)capturedValueByRef:(JSValue *)arg1;
- (JSValue *)capturedValue:(JSValue *)arg1;
- (JSValue *)getBoolean:(_Bool)arg1;
- (JSValue *)performSelectorWithTarget:(JSValue *)arg1 selector:(JSValue *)arg2 withObject:(JSValue *)arg3 withObject:(JSValue *)arg4;
- (JSValue *)performSelectorWithTarget:(JSValue *)arg1 selector:(JSValue *)arg2 withObject:(JSValue *)arg3;
- (JSValue *)performSelectorWithTarget:(JSValue *)arg1 selector:(JSValue *)arg2;
- (JSValue *)getCfunc:(NSString *)arg1 signature:(NSString *)arg2;
- (JSValue *)getCvar:(NSString *)arg1 type:(NSString *)arg2;
- (JSValue *)ivarReference:(JSValue *)arg1 name:(NSString *)arg2;
- (JSValue *)generalReference:(JSValue *)arg1 type:(NSString *)arg2 offset:(long long)arg3;
- (JSValue *)compoundAssignOperator:(NSString *)arg1 lhs:(JSValue *)arg2 rhs:(JSValue *)arg3;
- (JSValue *)binaryOperator:(NSString *)arg1 lhs:(JSValue *)arg2 rhs:(JSValue *)arg3;
- (JSValue *)unaryOperator:(NSString *)arg1 value:(JSValue *)arg2 BOOL:(_Bool)arg3;
- (JSValue *)checkZero:(JSValue *)arg1;
- (JSValue *)cast:(JSValue *)arg1 type:(NSString *)arg2;
- (JSValue *)nextWithEnumerator:(JSValue *)arg1;
- (JSValue *)fastEnumeratorWithCollection:(JSValue *)arg1;
- (JSValue *)structInitList:(NSString *)arg1 values:(JSValue *)arg2;
- (JSValue *)structInit:(NSString *)arg1;
- (JSValue *)cstring:(NSString *)arg1;
- (JSValue *)stringLiteralWithString:(NSString *)arg1;
- (JSValue *)stringFromProtocol:(JSValue *)arg1;
- (JSValue *)stringFromClass:(JSValue *)arg1;
- (JSValue *)toInt:(JSValue *)arg1;
- (_Bool)checkEqual:(JSValue *)arg1 another:(JSValue *)arg2;
- (JSValue *)declareObjectWithMemoryQualifier:(NSString *)arg1;
- (JSValue *)getSuper:(JSValue *)arg1 superclass:(JSValue *)arg2 isClassMethod:(_Bool)arg3;
- (JSValue *)getField:(JSValue *)arg1 offset:(int)arg2 encoding:(NSString *)arg3;
- (JSValue *)generateDefaultValue:(NSString *)arg1;
- (JSValue *)generateArithmetic:(NSString *)arg1 value:(JSValue *)arg2;
- (JSValue *)generateSelector:(NSString *)arg1;
- (JSValue *)generateProtocol:(NSString *)arg1;
- (JSValue *)getIvar:(JSValue *)arg1 varName:(NSString *)arg2;
- (void)setIvar:(JSValue *)arg1 varName:(NSString *)arg2 value:(JSValue *)arg3;
- (JSValue *)defineBlock:(NSString *)arg1 function:(JSValue *)arg2 captures:(JSValue *)arg3;
- (JSValue *)require:(JSValue *)arg1;

@optional
- (JSValue *)originalCall:(JSValue *)arg1 methodName:(NSString *)arg2 arguments:(JSValue *)arg3 __JS_EXPORT_AS__originalCall:(id)arg4;
- (JSValue *)varDeclare:(JSValue *)arg1 initialValue:(JSValue *)arg2 __JS_EXPORT_AS__varDecl:(id)arg3;
- (JSValue *)capturedValueByRef:(JSValue *)arg1 __JS_EXPORT_AS__captureByRef:(id)arg2;
- (JSValue *)capturedValue:(JSValue *)arg1 __JS_EXPORT_AS__capture:(id)arg2;
- (JSValue *)getBoolean:(_Bool)arg1 __JS_EXPORT_AS__getBoolean:(id)arg2;
- (JSValue *)performSelectorWithTarget:(JSValue *)arg1 selector:(JSValue *)arg2 withObject:(JSValue *)arg3 withObject:(JSValue *)arg4 __JS_EXPORT_AS__performSelectorWithObjectWithObject:(id)arg5;
- (JSValue *)performSelectorWithTarget:(JSValue *)arg1 selector:(JSValue *)arg2 withObject:(JSValue *)arg3 __JS_EXPORT_AS__performSelectorWithObject:(id)arg4;
- (JSValue *)performSelectorWithTarget:(JSValue *)arg1 selector:(JSValue *)arg2 __JS_EXPORT_AS__performSelector:(id)arg3;
- (JSValue *)getCfunc:(NSString *)arg1 signature:(NSString *)arg2 __JS_EXPORT_AS__getCfunc:(id)arg3;
- (JSValue *)getCvar:(NSString *)arg1 type:(NSString *)arg2 __JS_EXPORT_AS__getCvar:(id)arg3;
- (JSValue *)ivarReference:(JSValue *)arg1 name:(NSString *)arg2 __JS_EXPORT_AS__getIvarRef:(id)arg3;
- (JSValue *)generalReference:(JSValue *)arg1 type:(NSString *)arg2 offset:(long long)arg3 __JS_EXPORT_AS__getRef:(id)arg4;
- (JSValue *)compoundAssignOperator:(NSString *)arg1 lhs:(JSValue *)arg2 rhs:(JSValue *)arg3 __JS_EXPORT_AS__compoundAssignOperator:(id)arg4;
- (JSValue *)binaryOperator:(NSString *)arg1 lhs:(JSValue *)arg2 rhs:(JSValue *)arg3 __JS_EXPORT_AS__binaryOperator:(id)arg4;
- (JSValue *)unaryOperator:(NSString *)arg1 value:(JSValue *)arg2 BOOL:(_Bool)arg3 __JS_EXPORT_AS__unaryOperator:(id)arg4;
- (JSValue *)checkZero:(JSValue *)arg1 __JS_EXPORT_AS__checkZero:(id)arg2;
- (JSValue *)cast:(JSValue *)arg1 type:(NSString *)arg2 __JS_EXPORT_AS__cast:(id)arg3;
- (JSValue *)nextWithEnumerator:(JSValue *)arg1 __JS_EXPORT_AS__fastEnumeratorNext:(id)arg2;
- (JSValue *)fastEnumeratorWithCollection:(JSValue *)arg1 __JS_EXPORT_AS__fastEnumerator:(id)arg2;
- (JSValue *)structInitList:(NSString *)arg1 values:(JSValue *)arg2 __JS_EXPORT_AS__structInitList:(id)arg3;
- (JSValue *)structInit:(NSString *)arg1 __JS_EXPORT_AS__structInit:(id)arg2;
- (JSValue *)cstring:(NSString *)arg1 __JS_EXPORT_AS__cstring:(id)arg2;
- (JSValue *)stringLiteralWithString:(NSString *)arg1 __JS_EXPORT_AS__string:(id)arg2;
- (JSValue *)stringFromProtocol:(JSValue *)arg1 __JS_EXPORT_AS__stringFromProtocol:(id)arg2;
- (JSValue *)stringFromClass:(JSValue *)arg1 __JS_EXPORT_AS__stringFromClass:(id)arg2;
- (JSValue *)toInt:(JSValue *)arg1 __JS_EXPORT_AS__toInt:(id)arg2;
- (_Bool)checkEqual:(JSValue *)arg1 another:(JSValue *)arg2 __JS_EXPORT_AS__equals:(id)arg3;
- (JSValue *)declareObjectWithMemoryQualifier:(NSString *)arg1 __JS_EXPORT_AS__object:(id)arg2;
- (JSValue *)getSuper:(JSValue *)arg1 superclass:(JSValue *)arg2 isClassMethod:(_Bool)arg3 __JS_EXPORT_AS__super:(id)arg4;
- (JSValue *)getField:(JSValue *)arg1 offset:(int)arg2 encoding:(NSString *)arg3 __JS_EXPORT_AS__getField:(id)arg4;
- (JSValue *)generateDefaultValue:(NSString *)arg1 __JS_EXPORT_AS__zero:(id)arg2;
- (JSValue *)generateArithmetic:(NSString *)arg1 value:(JSValue *)arg2 __JS_EXPORT_AS__arithmetic:(id)arg3;
- (JSValue *)generateSelector:(NSString *)arg1 __JS_EXPORT_AS__selector:(id)arg2;
- (JSValue *)generateProtocol:(NSString *)arg1 __JS_EXPORT_AS__protocol:(id)arg2;
- (JSValue *)getIvar:(JSValue *)arg1 varName:(NSString *)arg2 __JS_EXPORT_AS__getIvar:(id)arg3;
- (void)setIvar:(JSValue *)arg1 varName:(NSString *)arg2 value:(JSValue *)arg3 __JS_EXPORT_AS__setIvar:(id)arg4;
- (JSValue *)defineBlock:(NSString *)arg1 function:(JSValue *)arg2 captures:(JSValue *)arg3 __JS_EXPORT_AS__defineBlock:(id)arg4;
- (JSValue *)require:(JSValue *)arg1 __JS_EXPORT_AS__require:(id)arg2;
@end

