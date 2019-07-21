//
// WCPFuncService.m
//
// Created by dyf on 17/6/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import "WCPFuncService.h"
#import "WCPRedEnvelopConfig.h"
#import <objc/objc-runtime.h>

NSString *const WCPShortDateFormat = @"yyyy-MM-dd";
NSString *const WCPLongDateFormat  = @"yyyy-MM-dd HH:mm:ss";

@interface WCPFuncService ()

@end

@implementation WCPFuncService

+ (CGFloat)screenWidth {
    return WCPScreenWidth;
}

+ (CGFloat)screenHeight {
    return WCPScreenHeight;
}

+ (NSMutableArray *)filtMessageFromMsgList:(NSMutableArray *)msgList {
    NSMutableArray *msgListResult = [msgList mutableCopy];
    
    for (id msgWrap in msgList) {
        Ivar nsFromUsrIvar = class_getInstanceVariable(objc_getClass("CMessageWrap"), "m_nsFromUsr");
        NSString *m_nsFromUsr = object_getIvar(msgWrap, nsFromUsrIvar);
        if ([WCPRedEnvelopConfig sharedConfig].chatIgnoreInfo[m_nsFromUsr].boolValue) {
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
