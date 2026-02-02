//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol TextStatePublishLogicDelegate;

@interface TextStatePublishLogic : NSObject
{
    id <TextStatePublishLogicDelegate> _delegate;
    NSMutableArray *_taskQueue;
}

+ (id)taskQueueFilePath;
+ (id)decodeTaskQueue;
+ (void)encodeTaskQueue:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(nonatomic) __weak id <TextStatePublishLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldModifySelfContact;
- (void)onTaskFailure:(id)arg1;
- (void)onTaskSuccess:(id)arg1;
- (void)onTaskUpdate;
- (void)checkQueue;
- (id)tempTextStateList;
- (void)batchRetryErrorPublishingTextState;
- (id)nonNetworkErrorPublishingTextState;
- (_Bool)removeTextStateWithId:(id)arg1;
- (void)publishTextState:(id)arg1 associateMediaItem:(id)arg2 parameter:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

