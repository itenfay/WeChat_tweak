//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMomentsPredictTask : NSObject
{
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)didComplete;
- (void)main;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *taskID;

@end

