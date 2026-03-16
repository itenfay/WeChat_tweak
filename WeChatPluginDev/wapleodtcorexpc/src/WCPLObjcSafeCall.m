//
// WCPLObjcSafeCall.m
//

#import "WCPLObjcSafeCall.h"

#import "WCPLLogger.h"
#import <objc/message.h>
#import <objc/runtime.h>

id WCPLSafeValueForKey(id obj, NSString *key) {
    if (!obj || ![key isKindOfClass:[NSString class]] || key.length == 0) {
        return nil;
    }

    @try {
        return [obj valueForKey:key];
    } @catch (NSException *exception) {
        NSString *detail = [NSString stringWithFormat:@"kvc_get:%@", key];
        WCPLCatchLogTarget(exception, obj, detail);
        return nil;
    }
}

BOOL WCPLSafeSetValueForKey(id obj, NSString *key, id value) {
    if (!obj || ![key isKindOfClass:[NSString class]] || key.length == 0) {
        return NO;
    }

    @try {
        [obj setValue:value forKey:key];
        return YES;
    } @catch (NSException *exception) {
        NSString *detail = [NSString stringWithFormat:@"kvc_set:%@", key];
        WCPLCatchLogTarget(exception, obj, detail);
        return NO;
    }
}

id WCPLSafeObjectIvar(id obj, const char *name) {
    if (!obj || !name) {
        return nil;
    }
    Class cls = object_getClass(obj);
    if (!cls) {
        return nil;
    }
    Ivar ivar = class_getInstanceVariable(cls, name);
    if (!ivar) {
        return nil;
    }
    const char *encoding = ivar_getTypeEncoding(ivar);
    if (!encoding || encoding[0] != '@') {
        return nil;
    }
    return object_getIvar(obj, ivar);
}

id WCPLObjcCallId0(id target, SEL selector) {
    if (!(target && selector) || ![target respondsToSelector:selector]) {
        return nil;
    }

    @try {
        return ((id (*)(id, SEL))objc_msgSend)(target, selector);
    } @catch (NSException *exception) {
        NSString *detail = [NSString stringWithFormat:@"objc_call_id0:%@", NSStringFromSelector(selector)];
        WCPLCatchLogTarget(exception, target, detail);
        return nil;
    }
}

id WCPLObjcCallId1(id target, SEL selector, id arg) {
    if (!(target && selector) || ![target respondsToSelector:selector]) {
        return nil;
    }

    @try {
        return ((id (*)(id, SEL, id))objc_msgSend)(target, selector, arg);
    } @catch (NSException *exception) {
        NSString *detail = [NSString stringWithFormat:@"objc_call_id1:%@", NSStringFromSelector(selector)];
        WCPLCatchLogTarget(exception, target, detail);
        return nil;
    }
}

BOOL WCPLObjcCallVoid0(id target, SEL selector) {
    if (!(target && selector) || ![target respondsToSelector:selector]) {
        return NO;
    }

    @try {
        ((void (*)(id, SEL))objc_msgSend)(target, selector);
        return YES;
    } @catch (NSException *exception) {
        NSString *detail = [NSString stringWithFormat:@"objc_call_void0:%@", NSStringFromSelector(selector)];
        WCPLCatchLogTarget(exception, target, detail);
        return NO;
    }
}

BOOL WCPLObjcCallVoid1(id target, SEL selector, id arg) {
    if (!(target && selector) || ![target respondsToSelector:selector]) {
        return NO;
    }

    @try {
        ((void (*)(id, SEL, id))objc_msgSend)(target, selector, arg);
        return YES;
    } @catch (NSException *exception) {
        NSString *detail = [NSString stringWithFormat:@"objc_call_void1:%@", NSStringFromSelector(selector)];
        WCPLCatchLogTarget(exception, target, detail);
        return NO;
    }
}

BOOL WCPLObjcCallBool2(id target, SEL selector, id arg0, id arg1) {
    if (!(target && selector) || ![target respondsToSelector:selector]) {
        return NO;
    }

    @try {
        return ((BOOL (*)(id, SEL, id, id))objc_msgSend)(target, selector, arg0, arg1);
    } @catch (NSException *exception) {
        NSString *detail = [NSString stringWithFormat:@"objc_call_bool2:%@", NSStringFromSelector(selector)];
        WCPLCatchLogTarget(exception, target, detail);
        return NO;
    }
}
