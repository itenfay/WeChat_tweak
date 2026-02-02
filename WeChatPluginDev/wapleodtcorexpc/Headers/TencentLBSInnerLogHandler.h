//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TencentLBSInnerLogHandler : NSObject
{
    _Bool _isSetLogBlock;
    CDUnknownBlockType _logPrintBlock;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property _Bool isSetLogBlock; // @synthesize isSetLogBlock=_isSetLogBlock;
@property(copy, nonatomic) CDUnknownBlockType logPrintBlock; // @synthesize logPrintBlock=_logPrintBlock;
- (void)tencentLbsPrintLogWith:(id)arg1 withString:(id)arg2;
- (void)tencentReSetLogBlock;
- (void)tencentSetLogBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

