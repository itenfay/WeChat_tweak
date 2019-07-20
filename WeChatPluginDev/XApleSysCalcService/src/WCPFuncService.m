//
//  EZFuncService.m
//
//  Created by ez on 17/6/6.
//  Copyright © 2017年 ez. All rights reserved.
//

#import "EZFuncService.h"
#import "EZRedEnvelopConfig.h"
#import <objc/objc-runtime.h>

NSString *const EZShortDateFormat = @"yyyy-MM-dd";
NSString *const EZLongDateFormat = @"yyyy-MM-dd HH:mm:ss";

@interface EZFuncService ()

@end

@implementation EZFuncService

+ (CGFloat)screenWidth {
    return EZScreenWidth;
}

+ (CGFloat)screenHeight {
    return EZScreenHeight;
}

+ (NSMutableArray *)filtMessageFromMsgList:(NSMutableArray *)msgList {
    NSMutableArray *msgListResult = [msgList mutableCopy];
    for (id msgWrap in msgList) {
        Ivar nsFromUsrIvar = class_getInstanceVariable(objc_getClass("CMessageWrap"), "m_nsFromUsr");
        NSString *m_nsFromUsr = object_getIvar(msgWrap, nsFromUsrIvar);
        if ([EZRedEnvelopConfig sharedConfig].chatIgnoreInfo[m_nsFromUsr].boolValue) {
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
