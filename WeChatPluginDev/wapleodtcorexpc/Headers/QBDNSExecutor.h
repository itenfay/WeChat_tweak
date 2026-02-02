//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class NSCondition;

@interface QBDNSExecutor : NSObject
{
    NSCondition *_condition;
}

+ (id)registerExecutorName:(id)arg1;
- (id)executeBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end
