//
// WCPLFuncService.m
//
// Created by dyf on 17/6/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPLFuncService.h"
#import "WCPLRedEnvelopConfig.h"
#import <objc/objc-runtime.h>

NSString *const WCPLShortDateFormat = @"yyyy-MM-dd";
NSString *const WCPLLongDateFormat  = @"yyyy-MM-dd HH:mm:ss";

@interface WCPLFuncService ()

@end

@implementation WCPLFuncService

+ (CGFloat)screenWidth {
    return WCPLScreenWidth;
}

+ (CGFloat)screenHeight {
    return WCPLScreenHeight;
}

+ (NSMutableArray *)filtMessageFromMsgList:(NSMutableArray *)msgList {
    NSMutableArray *msgListResult = [msgList mutableCopy];
    
    for (id msgWrap in msgList) {
        Ivar nsFromUsrIvar = class_getInstanceVariable(objc_getClass("CMessageWrap"), "m_nsFromUsr");
        NSString *m_nsFromUsr = object_getIvar(msgWrap, nsFromUsrIvar);
        if ([WCPLRedEnvelopConfig sharedConfig].chatIgnoreInfo[m_nsFromUsr].boolValue) {
            [msgListResult removeObject:msgWrap];
        }
    }
    
    return msgListResult;
}

+ (NSString *)stringFromDate:(NSDate *)date withFormat:(NSString *)format {
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:format];
    return [dateFormatter stringFromDate:date];
}

@end
