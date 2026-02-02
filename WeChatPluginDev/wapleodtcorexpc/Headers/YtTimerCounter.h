//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface YtTimerCounter : NSObject
{
    unsigned long long elaspeTimeMs;
    unsigned long long targetTimeoutMs;
    _Bool needTimer;
    NSString *name;
    _Bool needShowTimer;
}

- (void).cxx_destruct;
- (_Bool)isWorking;
- (void)cancel;
- (_Bool)checkTimeout;
- (void)reset;
- (void)start;
- (id)initWith:(unsigned long long)arg1 withName:(id)arg2 withTips:(_Bool)arg3;

@end

