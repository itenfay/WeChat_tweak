//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface OMJAsyncTaskInfo : NSObject
{
    NSError *_error;
    long long _executionID;
    NSString *_taskTag;
    struct XMJAsyncTaskInfo _backingTaskInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct XMJAsyncTaskInfo backingTaskInfo; // @synthesize backingTaskInfo=_backingTaskInfo;
@property(readonly, nonatomic) NSString *taskTag; // @synthesize taskTag=_taskTag;
@property(readonly, nonatomic) long long executionID; // @synthesize executionID=_executionID;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)description;
- (id)initWithBackingTaskInfo:(struct XMJAsyncTaskInfo)arg1;

@end

